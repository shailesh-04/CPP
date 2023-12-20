#include<conio.h>
#include<iostream.h>
class STD
{
	int roll,oracle,java,netWorking,totle;
	long int mobailNumber;
	float pre;
	char name[20];
	public:

	void Input()
	{
		int flag=0;
		cout<<"\n Enter STD Roll No. :-";
		cin>>roll;
		cout<<"\n Enter STD Name  :-";
		cin>>name;
		cout<<"\n Enter STD Mobail Number :-";
		cin>>mobailNumber;
		cout<<"\n Enter MArk OF (1)Oracle (2) Java (3)NEtWorking :-"<<endl;
		cin>>oracle>>java>>netWorking;
		do{
			flag=0;
			if(oracle <= 0 || oracle >=100)
			{
				flag=1;
				cout<<"\n oracle mark is Must betweeen 0 T0 100"<<endl;
				cout<<"Re Enter MArk Of Oracle :-";
				cin>>oracle;
			}
			if(java <= 0 || java >=100)
			{
				flag=1;
				cout<<"\n java mark is Must betweeen 0 T0 100"<<endl;
				cout<<"Re Enter MArk Of java :-";
				cin>>oracle;
			}
			if(netWorking <= 0 || netWorking >=100)
			{
				flag=1;
				cout<<"\n EntWorking mark is Must betweeen 0 T0 100"<<endl;
				cout<<"Re Enter MArk Of Net Working:- ";
				cin>>oracle;
			}
		}while(flag!=0);
	}
};
void main()
{
	clrscr();
	STD S;
	S.Input();
	getch();
}