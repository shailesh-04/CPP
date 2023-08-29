#include<conio.h>
#include<iostream.h>
class STD
{
	int roll,s1,s2,s3,s4,totle;
	char *name;
	public:

	STD()
	{
		name = new char[20];
	}

	STD( int roll,char *name,int s1,int s2,int s3,int s4)
	{
		this->roll = roll;
		this->name = name;
		this->s1 = s1;
		this->s2 = s2;
		this->s3 = s3;
		this->s4 = s4;
	}

	STD(STD &s)
	{
		roll = s.roll;
		name = s.name;
		s1 = s.s1;
		s2 = s.s2;
		s3 = s.s3;
		s4 = s.s4;
	}

	int sun()
	{
		return(s1+s2+s3+s4);

	}
	void Display()
	{
		cout<<"\n ROLL :>"<<roll;
		cout<<"\n NAME :>"<<name;
		cout<<"\n SUB1 :>"<<s1;
		cout<<"\n SUB2 :>"<<s2;
		cout<<"\n SUB3 :>"<<s3;
		cout<<"\n SUN4 :>"<<s4;
		totle = sun();
		cout<<"\n TOTLE :>"<<totle;
	}

};
void main()
{
	int roll,s1,s2,s3,s4;
	char *name;

	name = new char[20];
	clrscr();
	cout<<"\n Enter Roll NO. :-";
	cin>>roll;
	cout<<"\n Enter Name :-";
	cin>>name;
	cout<<"\n Enter Sub1 Mark :-";
	cin>>s1;
	cout<<"\n Enter Sub2 Mark :-";
	cin>>s2;
	cout<<"\n Enter Sub3 Mark :-";
	cin>>s3;
	cout<<"\n Enter Sub4 Mark :-";
	cin>>s4;

	STD S(roll,name,s1,s2,s3,s4);

	STD D = S;

	D.Display();
	getch();

}