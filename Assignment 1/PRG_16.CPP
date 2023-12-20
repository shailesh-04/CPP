#include<conio.h>
#include<iostream.h>
class PRN
{
	int r;
	public:
	PRN()
	{
		cout<<"\n TAKE Value Of Rate Intrate :-";
		cin>>r;
	}
	float Find(int p,int n)
	{
		float prn;
		prn = (p*r*n)/100;

		return prn;
	}
};
void main()
{
	int p,n;
	clrscr();
	cout<<"\n Take Value Of Priple Amount :-";
	cin>>p;
	cout<<"\n Take Value Of N umber Of Year :-";
	cin>>n;
	PRN P;
	cout<<"\n Valur Of Prisiple Amount"<<P.Find(p,n);

	getch();
}