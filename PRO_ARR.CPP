#include<conio.h>
#include<iostream.h>

class Product
{
	int id,qlt,ret;
	char name[9];
	double total;
	public:

	void Get_Data()
	{
		cout<<"\nEnter Product Id :-";
		cin>>id;
		cout<<"Enter Product Name :-";
		cin>>name;
		cout<<"Enter Product Quelity :-";
		cin>>qlt;
		cout<<"Enter Product Ret :-";
		cin>>ret;
	}
	void Process_Data()
	{
		total = qlt * ret;
	}
	void Put_Data()
	{
		cout<<"\n"<<id<<"\t"<<name<<"\t"<<total;
	}
};
void main()
{
	clrscr();

	 Product p[5];
	 int sz = 5;
	 for(int i=0; i<sz; i++)
	 {
		p[i].Get_Data();
		p[i].Process_Data();
	 }

	 clrscr();

	 cout<<"\n Id \t Name\t Total";
	 for(i=0; i<sz; i++)
	 {
		cout<<"\n------------------";
		p[i].Put_Data();
	 }

	getch();
}