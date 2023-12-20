#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<malloc.h>
class STRING
{
	public:
	char str[20];
	STRING()
	{
		strcpy(str,"ABC");
	}
};
class COMBI
{
	public:
	COMBI()
	{
		// That Is DoNothing Contructor
	}
	COMBI(STRING S)
	{
		int len = strlen(S.str);
		char *strL,strR[10];
		strL = (char *)malloc(1*sizeof(char));
		for(int i=0; i<len; i++)
		{
		  //	for(int j=0; j<len; j++)
			//{
				if(0>=i)
					strL[i]=S.str[i];
			//}
		}
		cout<<strL<<endl;
		cout<<strR<<endl;
	}

  //	void StrCombi(char strL,char strR)

};
void main()
{
	clrscr();
	STRING S;
	COMBI C;

	C = S;
	getch();
}