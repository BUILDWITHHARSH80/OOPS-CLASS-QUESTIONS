#include<iostream>
using namespace std;
int main(){
  int i;
  int arr[5]={1,2,3,4,5};
  int index=-1;
  for (i=0;i<5;i++)
  {
    if (arr[i]==8)
    {
      index=i;
      cout<<index;
      break;
    }
    else{
      cout<<index;
    }
  }
  

}