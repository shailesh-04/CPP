#include<conio.h>
#include<iostream.h>
#include<string.h>
class STUDENT
{
	int id;
	char name[10],college[10];
	float per;
	public:

	void Get();

	void Sort(STUDENT *S,int n);

	void Put(int i);
};
void STUDENT::Get()
{
	cout<<"\nEnter Student id :-";
	cin>>id;
	cout<<"\nEnter Student Name :-";
	cin>>name;
	cout<<"\nEnter Student Pre :-";
	cin>>per;
	cout<<"\nEnter Student College Name:-";
	cin>>college;
}

void STUDENT::Put(int i)
{
	gotoxy(2,4+i);cout<<id;
	gotoxy(10,4+i);cout<<name;
	gotoxy(25,4+i);cout<<per;
	gotoxy(35,4+i);cout<<college;
}

void STUDENT::Sort(STUDENT *S,int n)
{
	STUDENT T;
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(strcmp(S[i].college,S[j].college) > 0)
			{
				T=S[i];
				S[i]=S[j];
				S[j]=T;
			}
		}
	}

}
void main()
{
	int n;
	clrscr();

	STUDENT S[10];
	cout<<"\nHow Many Do Want To Record :-\n";
	cin>>n;
	for(int i=0; i<n; i++)
	{
		S[i].Get();
	}
		S[0].Sort(S,n);
		clrscr();
		cout<<"\n Id     name            Per        Collge"<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	for(i=0; i<n; i++)
	{
		S[i].Put(i);
	}

		getch();
}