#include<conio.h>
#include<iostream.h>

class Max
{
	int a,b,c;
	public:

	void Get()
	{
	 cout<<"\nEnter Any Value Of A :-";
	 cin>>a;
	 cout<<"Enter Any Value Of B :-";
	 cin>>b;
	 cout<<"Enter Any Value Of C :-";
	 cin>>c;
	}
	int Process()
	{
	  int max;
	  if(a>b && a>c)
	  {
		 max = a;
	  }
	  else if(b>a && b>c)
	  {
		 max = b;
	  }
	  else if(c>a && c>b)
	  {
		 max = c;
	  }
	  return max;
  }
  void Put()
  {
	 int m = Process();
	 cout<<"\n Max Number Is :->"<<m;
  }
};
void main()
{
	clrscr();

	Max m;
	m.Get();
	m.Put();

	getch();
}