#include<conio.h>
#include<iostream.h>
class OpOver
{
	int x,y;
	public:
	OpOver()
	{
		x=10;
		y=20;
	}
	void Display()
	{
		cout<<"\n VALUE OF X :"<<x;
		cout<<"\n VALUE OF Y :"<<y;
	}
	void operator++()
	{
		cout<<"\n\n The Opratotr Over Loding Is Cass";
		for(int i=0; i<8; i++)
		{
			x++;
			y++;
		}
	}
};
void operator++()
	{
		cout<<"\n\n The Opratotr Over Loding Is Cass";
		for(int i=0; i<8; i++)
		{
			x++;
			y++;
		}
	}
void main()
{
	clrscr();

	OpOver O;

	O++; //Hear Oprator Over Loaded

	O.Display();

	getch();
}