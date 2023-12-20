#include<conio.h>
#include<iostream.h>
class Multplication
{
	int m1,m2,m3;
	public:
	void Mult(int y,int x)
	{
		m1 = y*x;
	}
	void Mult(int x,int y,int z)
	{
		m2 = y*x*z;
	}
	void Mult(int x,int y,int z,int p)
	{
		m3 = x*y*z*p;
	}
	void Out()
	{
		cout<<"\n Multiplecation_2 :-)"<<m1;
		cout<<"\n Multiplecation_3 :-)"<<m2;
		cout<<"\n Multiplecation_4 :-)"<<m3;
	}
};
void main()
{
	clrscr();
	Multplication M;
	M.Mult(5,10);
	M.Mult(5,10,15);
	M.Mult(5,10,15,29);
	M.Out();
	getch();
}