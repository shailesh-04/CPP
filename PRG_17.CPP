#include<conio.h>
#include<iostream.h>
class EMP
{
	int no;
	char name[10],depatment[10];
	float ta,da,pf,netSalary,basicSalary;
	public:
	EMP()
	{
		netSalary = 0;
		cout<<"\nEnter Emaploy No :-";
		cin>>no;
		cout<"\nEnter Emaploy Name :-";
		cin>>name;
		cout<"\nEnter Emaploy Depatment :-";
		cin>>depatment;
		cout<<"\nEnter Employ Basic salary :-";
		cout<"\nEnter Emaploy Ta :-";
		cin>>ta;
		cout<"\nEnter Emaploy Da :-";
		cin>>da;
		cout<"\nEnter Emaploy Pf :-";
		cin>>pf;
	}
	void Pro()
	{
		ta = (basicSalary * 10)/100;
		da = (basicSalary * 9)/100;
		pf = (basicSalary * 7)/100;
		netSalry = (ta+da) - pf;
	}
	void Put();
};
void EMP::Put()
{
	cout<<"\n";
}
void main()
{
	clrscr();
	EMP E;
	E.Pro();
	E.Put();

	getch();
}