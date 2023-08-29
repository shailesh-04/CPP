#include<conio.h>
#include<iostream.h>

class Product
{
	int pId;
	char name[5];
	public:

	void Get()
	{
		cout<<"Enter Product Id :-";
		cin>>pId;
		cout<<"Enter Product Name :-";
		cin>>name;
	}
	void Put()
	{
		cout<<"\nProduct Id )-"<<pId;
		cout<<"\nProdunt Name )-"<<name;
	}

};
void main()
{
	clrscr();

	Product p[5];
	for(int i=0; i<5; i++)
	{
		p[i].Get();
	}

	clrscr();

	for(i=0; i<5; i++)
	{
		p[i].Put();
	}

	getch();
}