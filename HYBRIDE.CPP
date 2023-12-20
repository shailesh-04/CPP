#include<conio.h>
#include<iostream.h>
class Base
{
	public:
	int a;
};
class Derive1: virtual public Base
{
	public:
	int b;
};
class Derive2:public virtual Base
{
	public:
	int c;
};
class Child:public Derive1,public Derive2
{
	int total;
	public:
	void Get()
	{
		cout<<"\n Enter Any Value Of A,B,C:-";
		cin>>a>>b>>c;
	}
	void Display()
	{
		total = a+b+c;
		cout<<"Total Are ->"<<total;
	}
};
void main()
{
	clrscr();
	Child C;
	C.Get();
	C.Display();
	getch();
}