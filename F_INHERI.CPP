/*
      First Program Of Inheritance 
      =======Single Inheritance======
*/
#include<conio.h>
#include<iostream.h>
class College
{
	protected:
	char *Name;

	College()
	{
		Name= new char[20];
		Name = "Parekh Colllge";
	}
};
class
Std1:College
{
	public:
	void Display()
	{
		cout<<"\n Colloe Name Id "<<Name;
	}
};
class Std2:College
{
	public:
	void Display()
	{
		cout<<"\n Colloe Name Id "<<Name;
	}
};
void main()
{
	clrscr();
	Std1 S1;
	S1.Display();
	Std2 S2;
	S2.Display();
	getch();
}
