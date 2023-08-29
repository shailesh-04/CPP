#include<stdio.h>
#include<conio.h>
#include<iostream.h>

class ITEM
{
	int i_Id;
	char name[10];
	float stock;
	public:
	ITEM()
	{
		cout<<"\n Enter Stoct id :-";
		cin>>i_Id;
		cout<<"\n Enter item Name :-";
		cin>>name;
	}
	void Pershes();
	void Sale();
	void Stock();
};

void ITEM::Pershes()
{
	float t;
	cout<<"\n How Many Rupes Pershase Item :-";
	cin>>t;
	stock += t;
}
void ITEM::Sale()
{
	float t;
	cout<<"\n How Many Do you want to Sall Item :-";
	cin>>t;
	if(stock > t)
	{
		cout<<"\n The Stock Ids Sucsessfuly Sele :--"<<t;
		stock -= t;
	}
	else
	{
		cout<<"\n Stock Is Not Avalable ..";
	}
}
void ITEM::Stock()
{
	cout<<"\n Item Id :-"<<i_Id;
	cout<<"\n Item Name :-"<<name;
	cout<<"\n Stock :-"<<stock;
}
void main()
{
	char ch;
	clrscr();
	ITEM i;
	while(ch!='#')
	{
	clrscr();
		cout<<"\n 1) Preshace Item";
		cout<<"\n 2) Sale Items";
		cout<<"\n 3) Stock";
		cout<<"\n\n Enter Your Choice :- ";
		ch = getch();
		switch(ch)
		{
			case '1': i.Pershes(); break;
			case '2': i.Sale();    break;
			case '3': i.Stock(); getch(); break;
		}
	}
}