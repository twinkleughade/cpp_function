# include <iostream>
using namespace std;
void fun(int arr[],int l)
{
    for(int i=0;i<l;i++)
    {
        cout<<arr[i]<<"\n"; //cout<<arr[i]+10<<"\n";
    }
}
int main()
{
 int arr[]={1,3,4,5,6,7};
 int s=sizeof(arr)/sizeof(arr[0]); 
 fun(arr,s);
 cout<<"\n after function calling\n";
  for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\n"; 
    }
}
















