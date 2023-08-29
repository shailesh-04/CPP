#include<conio.h>
#include<iostream.h>
class Mult_Of_All_Degit
{
	int num,rem,mult;
	public:
	Mult_Of_All_Degit()
	{
	 mult=1;
	 rem =0;
	}
	void Get_Num()
	{
		cout<<"\nEnter Any Value :-";
		cin>>num;
	}
	void Process()
	{
		while(num>0)
		{
			rem = num%10;
			mult *= rem;
			num = num/10;
		}
	}
	void Put()
	{
		cout<<"\n Mult Is |-"<<mult;
	}
};
void main()
{
	clrscr();

	Mult_Of_All_Degit m;
	m.Get_Num();
	m.Process();
	m.Put();

	getch();
}

//Made By Shailesh-04
