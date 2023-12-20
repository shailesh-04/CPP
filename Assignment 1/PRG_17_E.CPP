#include<conio.h>
#include<iostream.h>
#include<math.h>
class EMPLOY
{

	int id;
	char name[10],emp_dept[10];
	float basic_salary,DA,TA,PF;
	double net_salary;
	public:

	void Get_Data()
	{
		static int i=0;
		cout<<"\nEnter Employ Id :-";
		//cin>>id;

		cout<<"Enter Employ Name :-";
		//cin>>name;

		cout<<"Enter Employ Name :-";
		//cin>>emp_dept;

		cout<<"Enter Employ Salery:-";
		basic_salary = 1000 * (i+1);
		i++;
	}

	void Process_Data()
	{
		 DA = ceil((basic_salary*10)/100);

		TA = ceil((basic_salary*12)/100);

		PF = ceil((basic_salary*5)/100);

		net_salary = ceil((basic_salary + DA + TA)-PF);
	}

	void Put_Data(int i)
	{
		gotoxy(2,5+i);cout<<id;
		gotoxy(7,5+i);cout<<name;
		gotoxy(19,5+i);cout<<basic_salary;
		gotoxy(28,5+i);cout<<DA;
		gotoxy(35,5+i);cout<<TA;
		gotoxy(48,5+i);cout<<PF;
		gotoxy(50,5+i);cout<<net_salary;
	}
};
void main()
{
	clrscr();

	EMPLOY E[5];
	int sz = 10;

	for(int i=0; i<sz; i++)
	{
		E[i].Get_Data();
	}
	for(i=0; i<sz; i++)
	{
		E[i].Process_Data();
	}

	clrscr();

	cout<<"\nEmp_Id Emp_Name   B_Salery DA   TA   NET_Salary"<<endl;
	cout<<"-------------------------------------------------"<<endl;
	for(i=0; i<sz; i++)
	{
		E[i].Put_Data(i);
	}

	getch();
}