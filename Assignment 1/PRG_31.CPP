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
		void Get()
		{
			cout<<"\n Enter Any Number :-";
			cin>>num;
		}
		int Prosess()
		{
			int temp = num;
			while(num > 0)
			{
				rem = num % 10;
				rev = (rev * 10) + rem;
				num = num /10;
			}
			return temp;
		}
		void Put(int temp)
		{
			cout<<"\n-----------------------------"<<endl;
			cout<<"\n YOUR ENTERED NUMBER IS :-  "<<temp<<endl;
			cout<<"\n THE REVERS NUMBER IS :- "<<rev<<endl;
			cout<<"\n-----------------------------"<<endl;

		}
};
void main()
{
	int temp=0;
	clrscr();

	REVERS R;

	R.Get();
	temp = R.Prosess();
	R.Put(temp);

	getch();
}
