#include<conio.h>
#include<iostream.h>
class sum_Of_All_Degit
{
	int num,rem,sum;
	public:
	sum_Of_All_Degit()
	{
	 sum=0;
	}
	void Get_Num()
	{
		cout<<"\nEnter Any Value For Sum Of All Deget :-";
		cin>>num;
	}
	void Process()
	{
		while(num>0)
		{
			rem = num%10;
			sum += rem;
			num = num/10;
		}
	}
	void Put()
	{
		cout<<"\n Sum Is ::-"<<sum;
	}
};
void main()
{
	clrscr();

	sum_Of_All_Degit s;
	s.Get_Num();
	s.Process();
	s.Put();

	getch();
}

//Made By Shailesh-04
