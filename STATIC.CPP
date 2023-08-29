#include<conio.h>
#include<iostream.h>
class Demo
{
	public:
	int x;
	static int num;
	Demo()
	{
		x=0;
	}
	void count()
	{
		num += 10;
		x++;
	}
	void Dispaly()
	{
		cout<<"Statict Variable Value :-"<<num<<endl;
		cout<<"Normaal Valriable Value :-"<<x<<endl;
	}


};
void main()
{
	clrscr();
	Demo d,d1,d2;

	d.count();
	d1.count();
	d2.count();

	d.Dispaly();
	d1.Dispaly();
	d2.Dispaly();
	getch();
}