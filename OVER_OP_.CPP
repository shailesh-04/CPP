#include<iostream.h>
#include<conio.h>
class OPERATOR{
	int x,y;
	public:
	OPERATOR(int i,int j)
	{
		x = i;
		y = j;
	}
	void operator++(){
		x++;
		y--;
	}
	void Display(){

		cout<<"\n Value Of X :-"<<x;
		cout<<"\n Value Of Y :-"<<y;
	}

};
class MONTH{
	int month;
	public:
	MONTH(DAY D){
		month = D.day;
	}
	void Display(){
		cout<<"The Value Of Month :-"<<month;
	}
};

class DAY{
	int day;
	public:
	DAY(int d){
		day = d;
	}
  /*	operator MONTH(){
		MONTH M;
		M.month = this->day/356;
		return M;
	}*/

};

int main()
{
	clrscr();
	MONTH M;
	DAY D(365);

	M = D;

	M.Display();

	getch();
	return 0;
}
