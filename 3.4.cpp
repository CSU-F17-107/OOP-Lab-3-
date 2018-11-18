#include<iostream>
#include<conio.h>
using namespace std;
struct employee
{
char name[20];
char dep[20];
int salary;
};
void displayData (employee e[]);
int main()
{
employee e[5];
for(int i=0;i<=4;i++)
{
cout<<"enter name"<<i<<endl;
cin>>e[i].name;
cout<<"enter dementepart"<<i<<endl;
cin>>e[i].dep;
cout<<"enter salary"<<i<<endl;
cin>>e[i].salary;

}
displayData(e);
return 0;
}


void displayData(employee e[ ]) 
{
for(int i=0;i<=4;i++)
{
cout<<"name of employee"<<i<<endl<<e[i].name<<endl;
cout<<"name of department"<<i<<endl<<e[i].dep<<endl;
cout<<"employee Salary"<<i<<endl<<e[i].salary<<endl;
}
}

