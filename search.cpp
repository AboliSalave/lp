#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter Array Size:";
  cin>>n;
  int arr[n];
cout<<"Enter Number IN ascending:";
for(int i=0;i<n;i++)
cin>>arr[i];
int target;
cout<<"Enter Target TO Search:";
cin>>target;
int start=0,end=n-1,mid;
int pos=-1;
while(start<=end)
{
  mid=(start+end)/2;
if(arr[mid]==target)
{
  pos=mid;
}
else if(arr[mid]>target)
{
  end=mid-1;
}
else
{
  start=mid+1;
}
}
if(pos==1)
{
  cout<<target<<"is not"<<endl;
}
else
{
  cout<<target<<"preset at position"<<pos<<endl;
}
return 0;
}
