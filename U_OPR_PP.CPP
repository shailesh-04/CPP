#include<conio.h>
#include<iostream.h>
class OprtOver
{
	int x,y;
	public:
	void Get()
	{
		cout<<"\n Enter Value Of  X :-";
		cin>>x;
		cout<<"\n Enter Value Of  Y:-";
		cin>>y;
	}
	void Display()
	{
		cout<<"\n\n VALUE OF X : "<<x;
		cout<<"\n VALUE OF Y : "<<y;
	}
	void operator++()
	{
		x++;
		y++;
	}
};
void main()
{
	clrscr();
	OprtOver P;
	P.Get();
	for(int i=0; i<5; i++)
		++P;
	P.Display();
	getch();
}