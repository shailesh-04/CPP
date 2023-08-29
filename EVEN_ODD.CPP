#include<conio.h>
#include<iostream.h>
class SumOdd_MultEven
{
	int num,rem,even,odd;
	public:
	SumOdd_MultEven()
	{
	 even=0;
	 odd=1;
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
			if(rem%2==0)
			{
				 even += rem;
			}
			else
			{
				odd *= rem;
			}
			num = num/10;
		}
	}
	void Put()
	{
		cout<<"\n Even-Sum Is ::-"<<even;
		cout<<"\n Odd-MUlt Is ::-"<<odd;
	}
};
void main()
{
	clrscr();

	SumOdd_MultEven sm;
	sm.Get_Num();
	sm.Process();
	sm.Put();

	getch();
}

//Made By Shailesh-04
