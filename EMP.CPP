#include<conio.h>
#include<iostream.h>

class Employ
{

	int id;
	char name[5];
	double salery;
	public:

	void Input()
	{
		cout<<"\nEnter Employ Id :-";
		cin>>id;
		cout<<"Enter Employ Name :-";
		cin>>name;
		cout<<"Enter Employ Salery:-";
		cin>>salery;
	}
	void Output()
	{
		cout<<"\n"<<id<<"\t"<<name<<"\t"<<salery;
	}
};
void main()
{
	clrscr();

	Employ e[5];
	int sz = 5;

	for(int i=0; i<sz; i++)
	{
		e[i].Input();
	}

	clrscr();

	cout<<"\n Emp Id Emp Name Salery";
	for(i=0; i<sz; i++)
	{
		cout<<"\n------"<<i+1<<"-----\n";
		e[i].Output();
	}

	getch();
}