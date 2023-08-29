#include<conio.h>
#include<iostream.h>

class Student
{
	int roll,cpp,ds,os,sad,total;
	char name[4];
	float per;
	public:


	void Get()
	{
		cout<<"Enter Std Roll No. :-";
		cin>>roll;
		cout<<"Enter Std Name :-";
		cin>>name;
		cout<<"Enter Std CPP Mark :-";
		cin>>cpp;
		cout<<"Enter Std DS Mark :-";
		cin>>ds;
		cout<<"Enter Std OS Mark :-";
		cin>>os;
		cout<<"Enter Std SAD Mark :-";
		cin>>sad;
	}
	void Process()
	{
		total = cpp+ds+os+sad;
		per = total/4;
	}
	void Put()
	{
		clrscr();
		cout<<"\n Roll\tName\tTotal\tPer";
		cout<<"\n "<<roll<<"\t"<<name<<"\t"<<total<<"\t"<<per;
	}
};
void main()
{
	clrscr();

	Student s;
	s.Get();
	s.Process();
	s.Put();

	getch();
}