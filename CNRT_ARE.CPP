#include<conio.h>
#include<iostream.h>
class AREA{
	public:
	virtual float Area(){
	 return 0;
	}
};
class SQUERE:public AREA{
	float size;
	public:
	SQUERE(float s){
//		cout<<"\n Enter Value Of Squer Size :-";
		size = s;
	}
	float Area(){
		return (size*size);
	}
};
class RACTENGLE:public AREA{
	float width,length;
	public:
	RACTENGLE(float h,float b){
//		cout<<"\n Enter Value Of Squer Size :-";
		width = h;
		length = b;
	}
	float Area(){
		return (width*length)/2;
	}
};
class CIRCLE:public AREA{
	float radius;
	public:
	CIRCLE(float r){
//		cout<<"\n Enter Value Of Squer Size :-";
		radius = r;
	}
	float Area(){
		return (radius*radius)*3.14;
	}
};
int main()
{
	clrscr();
	SQUERE S(10.0);
	RACTENGLE R(10.0,20.0);
	CIRCLE C(10);

	cout<<"Value Of Squer     :-"<<S.Area()<<endl;
	cout<<"Value Of Ractengle :-"<<R.Area()<<endl;
	cout<<"Value Of Circle    :-"<<C.Area()<<endl;
	getch();
	return 0;
}