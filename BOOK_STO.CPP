#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<string.h>

class BOOK
{
	int b_code;
	char b_title[10],b_other[10],edition[10],publisher[10];
	public:
		void Get_Data();
		void Search(BOOK *B,int n);
		void Put();
		void Sort_Data(BOOK *B,int n);
};
void BOOK::Get_Data()
{
	cout<<"\n---------------------- "<<endl;
	cout<<"\n Enter BOOK Code :-";
	cin>>b_code;

	cout<<"\n Enter BOOK Title :-";
	cin>>b_title;

	cout<<"\n Enter BOOK Other :-";
	cin>>b_other;

	cout<<"\n Enter BOOK Edition :-";
	cin>>edition;

	cout<<"\n Enter BOOK Publiced :-";
	cin>>publisher;

}
void BOOK::Search(BOOK *B,int n)
{
	char se[10];
	int flag = 0;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	cout<<"\n Enter You Want To Search BOOK Title :-";
	cin>>se;
	for(int i=0; i<n; i++)
	{
		if(strcmp(B[i].b_title,se)==0)
		{
			flag = 1;
			break;
		}
	}
	if(flag == 0)
	{
		cout<<"\n  SEARCH BOOK TITLE IS NOT FOUND ...";
	}
	else
	{
		cout<<"\n  SEARCH BOOK TITLE NAME OF DATA BELOW SEE .."<<endl;
		cout<<"\n BOOK CODE  : "<<B[i].b_code;
		cout<<"\n BOOK TITLE : "<<B[i].b_title;
		cout<<"\n BOOK OTHER : "<<B[i].b_other;
		cout<<"\n EDITION    : "<<B[i].edition;
		cout<<"\n PUBLISHER  : "<<B[i].publisher;

	}
	getch();
}
void BOOK::Put()
{
	cout<<"\n"<<b_code<<"\t"<<b_title<<"\t"<<b_other<<"\t"<<edition<<"\t"<<publisher<<endl;
	getch();
}
void BOOK::Sort_Data(BOOK *B,int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(strcmp(B[i].b_title,B[j].b_title) > 0)
			{

			}
		}
	}
}
void main()
{
	int n;
	char ch;
	BOOK B[5];
	clrscr();
	while(ch!='#')
	{
	cout<<"\n # ) EXIT()";
	cout<<"\n 1 ) GET_DATA()";
	cout<<"\n 2 ) PUT_DATA()";
	cout<<"\n 3 ) SEARCH_DATA()";
	cout<<"\n 4 ) SORT_TITLE_DATA()";
	cout<<"\n Enter Your Choise :-";
	ch = getch();
	switch(ch)
	{
		case '1' :	cout<<"\n How Many Do You Want To Insert Data :-";
						cin>>n;
						for(int i=0; i<n; i++)
						{
							B[i].Get_Data(); //Insert Data
						}
						break;

		case '2' :  clrscr();
						cout<<"\nb_code \t b_title \t B_other \t edition \t publisher"<<endl;
						for(i=0; i<n; i++)
						{
							B[i].Put();    //Dispaly Data
						}
						getch();
						break;

		case '3' : 	B[0].Search(B,n);
						break;

		case '4' :	B[0].Sort_Data(B,n);
			break;
			}
	}

}