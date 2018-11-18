#include<iostream>
using namespace std;
struct student
{
	char name[25];
	char id[25];
	char dep[20];
	char sem[25];
	char cours[23];
	char marks[22];
};
struct course
{
 	char id[11];
 	char name[30];
 	char marks[23];
};
int a,n;
int entery()
{
		student s[5]; course c[5];
		cout<<"enter number of students";
		cin>>a;
			for(int i=1;i<=a;i++)
			{
			
	cout<<"Enter Student Name  ";
	cin>>s[i].name;
	cout<<"Enter Student ID  ";
	cin>>s[i].id;
	cout<<"Enter student Department ";
	cin>>s[i].dep;
	cout<<"Enter Student Semester  ";
	cin>>s[i].sem;
	}
	cout<<"Enter no.of Courses  ";
	cin>>n;

	for(int i=1;i<=n;i++)
	{
	cout<<"Enter Course Name : ";
	cin>>c[i].name;
	cout<<"Enter Course ID : ";
	cin>>c[i].id;
	cout<<"Enter Course Marks : ";
	cin>>c[i].marks;
}
}
int out()
{
		for(int i=1;i<=a;i++)
		{
		
	student s[5]; course c[5];
	cout<<"Student Name is: ";
	cout<<s[i].name<<endl;
	cout<<"Student ID is : ";
	cout<<s[i].id<<endl;
	cout<<"Student Department is: ";
	cout<<s[i].dep<<endl;
	cout<<"Student Semester is : ";	
cout<<s[i].sem<<endl;
}
course c[5];
	for(int i=1;i<=n;i++)
	{
	cout<<"Course Name ";
	cout<<c[i].name<<endl;
	cout<<"Course ID ";
	cout<<c[i].id<<endl;
	cout<<"Course marks  ";
	cout<<c[i].marks<<endl;
}
}

int main()
{

	entery();
	out();
}
