										//PROGRAM PARAMETER CONTRUCTON
#include<conio.h>
#include<iostream.h>
class Demo
{
	int x,y;
	public:
	Demo()
	{
		x=1;
		y=2;
	}
	Demo(int p, int c)
	{
		x = p;
		y = c;
	}
	Demo(int p)
	{
		x = p;
		y = 1000;
	}
	void Display()
	{
		cout<<"\n X :"<<x;
		cout<<"\n Y :"<<y;
	}
};
void main()
{
	clrscr();

	Demo A;
	A.Display();

	cout<<"\n==========\n";
	Demo B(10,20);
	B.Display();

	cout<<"\n==========\n";
	Demo C(20);
	C.Display();

	getch();
}