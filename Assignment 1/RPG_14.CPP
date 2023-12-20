#include<conio.h>
#include<iostream.h>
class DIVISION
{
	int x, y;
	public:
	DIVISION()
	{
		cout<<"\n Enter VAlue Of X :-";
		cin>>x;
		cout<<"\n Enter VAlue Of Y :-";
		cin>>y;
	}
	float Division()
	{
		return (x/y);
	}
};
void main()
{
	float div;
	clrscr();
	DIVISION D;

	div = D.Division();
	cout<<"\n DIVISION ARE -: "<<div;
	getch();
}