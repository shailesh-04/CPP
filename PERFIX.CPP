#include<conio.h>
#include<iostream.h>
class Pefix
{
	int x,y;
	public:
	void Get()
	{
		cout<<"\n Enter Any Value :-";
		cin>>x;
		cout<<"\n Enter Any Value :-";
		cin>>y;
	}
	void Display()
	{
		cout<<"\n Value Of X :-"<<x<<endl;
		cout<<"\ nValue Of Y :-"<<y<<endl;
	}
	void oprator++()
	{
		x = ++x;
		z = ++y;
	}
};
void main()
{
	clrscr();

	 Pefix P;
	 P.Get();
	 ++P;
	 P.Display();

	getch();
}