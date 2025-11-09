#include<iostream>
using namespace std;
int main(){
  int i;
  int ans=INT_MAX;
  int arr[5]={4,6,11,1,8};
  for (i=0;i>5;i++)
  {
    if (arr[i]<ans)
    {
     ans=arr[i];
    }
    cout<<ans;
  }
  
}