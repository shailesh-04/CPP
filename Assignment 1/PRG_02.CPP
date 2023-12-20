#include<conio.h>
#include<iostream.h>
class Find_Area
{
	public:
	void Area(int size)
	{
		int squre = size * size;
		cout<<" AREA OF SWUARE IS :"<<squre<<"\n";
	}
	void Area(float pi,int radius)
	{
		int cicle = (radius * radius) * pi;
		cout<<" AREA OF CIRLCE IS : "<<cicle<<"\n";
	}
	void Area(float base,float height)
	{
		float traingle = (base * height) / 2;

		cout<<" AREA OF TARAINGLR IS : "<<traingle<<"\n";
	}

};
void main()
{
	clrscr();

	Find_Area A;
	cout<<"\n.Enter Area Of SQURE RADIUS :-";
	int squre = 0;
	cin>>squre;
	A.Area(squre);
	//-----------//
	cout<<"\n.Enter Area Of CIRCLE RADIUS :- ";
	int circle = 0;
	cin>>circle;
	A.Area(3.14,circle);
	//-----------------//
	float base=0,height=0;
	cout<<"\n.Enter Area Of TRAINGLE BAISE :-";
	cin>>base;
	cout<<"Enter Area Of TRAINGLE HIGHT :-";
	cin>>height;
	A.Area(base,height);


	getch();
}
