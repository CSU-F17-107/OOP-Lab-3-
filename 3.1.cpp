#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
struct employee
{
char name[50];
char designation[50];
char joiningdate[10];


};
int main()
{
employee e; 
cout<<"enter employee name"<<endl;
cin.get(e.name,50);
cout<<"enter designation"<<endl;
cin>>e.designation;
cout<<"enter date of joining"<<endl;
cin>>e.joiningdate;


cout<<"displaying information"<<endl;
cout<<"employee name"<<endl<<e.name<<endl;
cout<<"designation"<<endl<<e.designation<<endl;
cout<<"date of joining"<<endl<<e.joiningdate<<endl;
}
