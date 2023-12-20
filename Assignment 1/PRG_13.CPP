#include<conio.h>
#include<iostream.h>
class SWAP
{
	int a,b;
	public:
	void Swap(int x, int y)
	{
		a =x;
		b =y;
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
	void Display()
	{
		cout<<"\n Value Of A -:"<<a;
		cout<<"\n Value Of B -:"<<b;
	}
};
void main()
{
	clrscr();

	SWAP S;
	S.Swap(30,10);
	S.Display();
	getch();
}