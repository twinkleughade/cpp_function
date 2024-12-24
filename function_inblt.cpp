#  include <iostream>
using namespace std;
# include<string.h>
int main()
{
char name[20];
char surname[20];
cout<<"Enter your name\n";
cin>>name;
cout<<"enter your surname"<<"\n";
cin>>surname;
cout<<"\n";
cout<<strlen(name)<<"\t";
cout<<"\n uppercase"<<strupr(name)<<"\n";
cout<<"\n lowrrcase"<<strlwr(name)<<"\n";
cout<<strcat(name,surname);
cout<<"\n";
cout<<"\n name=" <<name<<"\n";
cout<<"\n surname" <<surname<<"\n";
cout<<strcpy(name,surname);
cout<<"\n name"<<name<<"\n";
cout<<"\n surname="<<surname;
}