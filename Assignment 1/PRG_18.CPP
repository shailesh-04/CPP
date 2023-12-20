#include<conio.h>
#include<iostream.h>
class SWAP
{
	int a,b;
	public:
	void Get()
	{
		cout<<"\n Enter Value Of A :-";
		cin>>a;
		cout<<"\n Enter Value Of A :-";
		cin>>b;
	}
	void Display()
	{
		cout<<"\n Value Of A -:"<<a;
		cout<<"\n Value Of B -:"<<b;
	}
	void Swap(SWAP S)
	{
		int temp;
		temp = a;
		a = b;
		b = temp;
	}

};
void main()
{
	clrscr();

	SWAP S;
	S.Get();
	S.Swap(S);
	S.Display();
	getch();
}