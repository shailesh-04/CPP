#include<conio.h>
#include<iostream.h>
class Perfix
{
	int x,y;
	public:
	Perfix()
	{
		x=10;
		y=20;
	}
	void Diplay()
	{
		cout<<"\n Value Of X :-"<<x<<endl;
		cout<<" Value Of Y :-"<<y<<endl;
	}
	friend void opratore++(Perfix &A)
	{
		A.x = ++x;
		A.y = ++y;
	}
};
void main()
{
	clrscr();
	Perfix P;
	P.Display();
	++P;
	P.Display();
	getch();
}