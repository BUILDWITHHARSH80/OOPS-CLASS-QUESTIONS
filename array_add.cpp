#include<iostream>
using namespace std;
int main(){
  int i;
  int arr[10];
  int sum=0;
  cout<<"Enter the elements";
  for (i=0;i<10;i++)
  {
    cin>>arr[i];
  }
  for(i=0;i<10;i++){
    sum=sum+arr[i];
  }
  cout<<"The sum is:"<<sum;
  return 0;
}
