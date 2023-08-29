#include<iostream.h>
#include<conio.h>
class Add
{
	int a,b;
	public:

	void Input()
	{
		cout<<"Enter Any Value Of A :-";
		cin>>a;
		cout<<"Enter Any Value Of B :-";
		cin>>b;
	}
	void Output()
	{
		int sum = a + b;
		cout<<"\n A + B = "<<sum;
	}
};
void main()
{
	clrscr();
	Add a;
	a.Input();
	a.Output();
	getch();
}






