#include<conio.h>
#include<iostream.h>
class Faculty
{
	long int accoNum,bal;
	char *name;
	public:
	Faculty()
	{
		cout<<"\n Enter Acoount Number :-";
		cin>>accoNum;
		name = new char[10];
		cout<<"\n Enter Account Name :-";
		cin>>name;
		cout<<"\n Enter Account Balance :-";
		cin>>bal;
	}
	 void Deposite()
	 {
		cout<<"\n DEPOSITE COUNTER \n";
		cout<<"\n Enter Account Balance :-";
		cin>>bal;
	 }
	void Display()
	{
		cout<<"\n ACCOUNT NO. IS     -: "<<accoNum<<endl;
		cout<<" ACCOUNT NAME IS    -: "<<name<<endl;
		cout<<" ACCOUNT BALANCE IS -: "<<bal<<endl;
	}
	void Withdrow()
	{
		long int wtdrw;
		cout<<"\n HOW MANY YOU WANT TO WIDTHDROW BALANCE :-";
		cin>>wtdrw;
		if(wtdrw < bal)
		{
			cout<<"\n WITHDROW IS SUCCSESSFULLY COMPLETED.......";
			bal -= wtdrw;
		}
		else
		{
			cout<<" YOUR ACOUNT BALANCE IS NOT WITHDROW.......";
		}
	}
};
void main()
{
	char ch;
	clrscr();
	Faculty F;
	while(ch != '#')
	{
		clrscr();
		cout<<"\n #) EXIT ";
		cout<<"\n 1) DEPOSITE";
		cout<<"\n 2) WIDTHDROW";
		cout<<"\n 0) Display";
		cout<<"\n\n Enter Your Chose :-";
		cout<<"\n________________________________\n";

		ch = getch();

		switch(ch)
		{
			case '2': F.Withdrow(); getch();break;
			case '0': F.Display(); getch();break;
			case '1': F.Deposite(); getch();break;
		}
	}
	getch();
}