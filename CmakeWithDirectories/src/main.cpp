#include<iostream>
#include"header.cpp"
using namespace std;
int main()
{
cout<<"What do you want to find? \n Press 1 for sum, 2 for difference and 3 for nothing "<<endl;
int i;
cin>>i;
switch (i)
{
case 1:
{
int e,f;
cout<<"Enter two numbers:"<<endl;
cin>>e>>f;
cout<<"Sum= "<<sum(e,f);
break;
}
case 2:
{
int g,h;
cout<<"Enter two numbers:"<<endl;
cin>>g>>h;
cout<<"difference= "<<difference(g,h);
break;
}
case 3:
cout<<"ok"<<endl;
}
}

