//WAP to print the table of any number using function
// # include <iostream>
// using namespace std;
// void table(int a)
// {
//   for(int b=1; b<=10;b++)
//   {
//     cout<<a*b<<"\t";

//   }  
// }
// int main()
// {
// int a;
// cout<<"enter a no."<<"\n";
// cin>>a;
// table(a);
// }

# include <iostream>
using namespace std;
int table(int  a)
{
 return a; 
}
int main()
{
int a;
cout<<"enter a no."<<"\n";
cin>>a;
for(int b=1; b<=10;b++)
  {
    cout<<a*b<<"\t";
  }  
}