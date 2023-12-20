#include<conio.h>
#include<iostream.h>
class REVERS
{
	int num,rem,rev;
	public:
		REVERS()
		{
			rem = 0;
			rev = 0;
		}
		int Get()
		{
			cout<<"\n Enter Any Number :-";
			cin>>num;
			return num;
		}
		int Prosess()
		{
			while(num > 0)
			{
				rem = num % 10;
				rev = (rev * 10) + rem;
				num = num /10;
			}
		}
		void Put(int temp)
		{
			if(rev == temp)
			{
				cout<<"\n-----------------------------"<<endl;
					cout<<"\n A NUMBER IS PALINDROM..."<<endl;
				cout<<"\n-----------------------------"<<endl;
			}
			else
			{
				cout<<"\n-----------------------------"<<endl;
				cout<<"\n A NUMEBR IS NOT PALINDROM...  "<<endl;
				cout<<"\n-----------------------------"<<endl;
			}

		}
};
void main()
{
	int temp=0;
	clrscr();

	REVERS R;

	temp=R.Get();
	R.Prosess();
	R.Put(temp);

	getch();
}
