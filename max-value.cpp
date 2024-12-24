//WAP to print max value between two variable
# include <iostream>
using namespace std;
int mx(int a, int b)
{
  if (a>b)
  {
  return a;
  }
  else
  {
    return b;
  }
}
int main()
{
  int a,b;
    cout<<"enter 2 no."<<"\n";
    cin>>a>>b;
    cout<<mx(a,b);
  
}