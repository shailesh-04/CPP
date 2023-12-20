#include<conio.h>
#include<iostream.h>
class STUDENT
{
	int roll;
	long int phone;
	char *name,*adress,*course;
	public:
	STUDENT()
	{
		name  =  new char[20];
		adress = new char[20];
		course = new char[20];
	}
	STUDENT(int r,long int p,char n[20],char a[20],char c[20])
	{
		roll = r;
		phone = p;
		name = n;
		adress = a;
		course = c;
	}
	void Display()
	{
		cout<<"Roll    -:"<<roll<<endl;
		cout<<"Phone   -:"<<phone<<endl;
		cout<<"Name    -:"<<name<<endl;
		cout<<"Adress  -:"<<adress<<endl;
		cout<<"Course  -:"<<course<<endl;
	}
};
void main()
{
	clrscr();
	STUDENT S(100,1122334455,"shailesh","mahuva","BCA");
	S.Display();
	getch();
}