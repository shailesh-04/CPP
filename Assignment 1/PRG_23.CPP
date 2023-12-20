#include<conio.h>
#include<iostream.h>
#include<math.h>
class EMPLOY
{

	int id;
	char name[5];
	float basic_salary,da,hra;
	double net_salary;
	public:

	void Get_Data()
	{
		static int i=0;
		cout<<"\nEnter Employ Id :-";
		//cin>>id;
		cout<<"Enter Employ Name :-";
		//cin>>name;
		cout<<"Enter Employ Salery:-";
		basic_salary = 1000 * (i+1);
		i++;
	}

	void Process_Data()
	{
		 da = (basic_salary*10)/100;
		 da = ceil(da);

		hra = (basic_salary*12)/100;
		hra = ceil(hra);

		net_salary = basic_salary + da + hra;
		net_salary = ceil(net_salary);
	}

	void Put_Data(int i)
	{
		gotoxy(2,5+i);cout<<id;
		gotoxy(10,5+i);cout<<name;
		gotoxy(20,5+i);cout<<basic_salary;
		gotoxy(28,5+i);cout<<da;
		gotoxy(34,5+i);cout<<hra;
		gotoxy(39,5+i);cout<<net_salary;
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

	cout<<"\nEmp_Id Emp_Name   B_Salery DA   HRA   NET_Salary"<<endl;
	cout<<"-------------------------------------------------"<<endl;
	for(i=0; i<sz; i++)
	{
		E[i].Put_Data(i);
	}

	getch();
}