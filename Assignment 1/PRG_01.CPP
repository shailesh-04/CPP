#include<conio.h>
#include<iostream.h>
class Sum
{
	int x,y,z,sum;
	public:
	Sum()
	{
		cout<<"\n Enter Value Of First Number :-";
		cin>>z;
	}
	void Add(int x,int y)
	{
		sum = x+y+z;
	}
	void Display( int x,int y)
	{
		cout<<"\n\t"<<x<<" + "<<y<<" + "<<z<<" = "<<sum;
	}
};
void main()
{
	clrscr();

	Sum S;
	S.Add(5,10);
	S.Display(5,10);

	getch();
}
