// write a program to check given string is pelindrome string
# include <iostream>
using namespace std;
# include<string.h>
int main()
{
    char name [20];
    char tmp[20];
    cout<<"enter your name"<<"\n";
    cin>>name;
    cout<<"enter your next name\n";
    cin>>tmp;
    cout<<"\n";
    if (stricmp(tmp,name)==0)
    {
        cout<<"yes";
    }
    else{
        cout<<"no"<<"\n";
    }
}
