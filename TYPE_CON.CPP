#include<iostream.h>
#include<conio.h>
class MONTH{
	public:
	float month;
	void Display(){
		cout<<"\n Value Of Month :-"<<month;
	}
};
class DAY{
	float day;
	public:
	DAY(){
		day = 400.0;
	}
	operator MONTH(){
		MONTH M;
		M.month = this->day/365.0;
		return M;
	}
};
int main(){
	getch();
	DAY D;
	MONTH M;
	M = D;
	M.Display();
	return 0;
};