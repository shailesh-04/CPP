#include<conio.h>
#include<iostream.h>
class SMALL
{
	int x,y,z;
	public:
	void Get()
	{
		cout<<"\nEnter Any Value Of X :-";
		cin>>x;

		cout<<"\nEnter Any Value Of Y :-";
		cin>>y;

		cout<<"\nEnter Any Value Of Z :-";
		cin>>z;
	}
	void Small();
};
inline void SMALL::Small()
{
	if(x<y && x<z)
		cout<<"\n X : VALUE IS SMALL !";

	else if(y<x && y<z)
		cout<<"\n Y : VALUE IS SMALL !";

	else if(z<x && z<y)
		cout<<"\n Z : VALUE IS SMALL !";

	else
		cout<<"\n ALL VALUE ARE BOTH:!";
}
void main()
{
	clrscr();

	SMALL S;

	S.Get();
	S.Small();

	getch();
}