// WAP for swapping using call back referance
# include <iostream>
using namespace std;
void swp(int &a,int &b)
{
    // int t;
    // t=a;                we waste a memory
    // a=b;
    // b=t;    
    // cout<<"after swap a="<<a<<"\n";
    // cout<<"after swap b="<<b<<"\n";
    //another trick
    a=a+b;
    b=a-b;
    a=a-b;

}
int main()
{
    int a,b;
    cout<<"enter 2 no."<<"\n";
    cin>>a>>b;
    swp(a,b);
    cout<<"after swap a="<<a<<"\n";
    cout<<"after swap b="<<b<<"\n";
}