#include<conio.h>
#include<iostream.h>
#include<string.h>
class FACULTY
{
	int ageFaculty;
	long int phone;
	char facultName[20],city[20],address[20],gender[10];
	public:
	FACULTY()
	{

	}
	FACULTY(char f[20],char c[20],char a[20],char g[10],int age,long int p)
	{
		ageFaculty = age;
		phone = p;
		strcpy(facultName,f);
		strcpy(city,c);
		strcpy(address,a);
		strcpy(gender,g);
	}
	void Display()
	{
		cout<<"\n Age OF Faculty : "<<ageFaculty;
		cout<<"\n Mobail Number : "<<phone;
		cout<<"\n Faculty Name : "<<facultName;
		cout<<"\n City : "<<city;
		cout<<"\n Address : "<<address;
		cout<<"\n Gender : "<<gender;
	}
};
void main()
{
	clrscr();
	FACULTY F("shailesh","Mahuva"," Bhavnager","Male",23,3489564536);
	F.Display();
	getch();
}