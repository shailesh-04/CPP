#include<conio.h>
#include<iostream.h>
class MATRIX{
	int matrix[3][3];
	int flag;
	public:
	void GetValue();
	void Display(MATRIX);
	void operator==(MATRIX);
	MATRIX(){
		flag = 0;
		GetValue();
	}
};
void MATRIX::operator==(MATRIX M){
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(M.matrix[i][j]!=matrix[i][j])
			{
				flag = 1;
				break;
			}
		}
	}
}
void MATRIX::GetValue(){
	cout<<"Hear Enter Value Of Matrix :-\n\n";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin>>matrix[i][j];
		}
	}
}
void MATRIX::Display(MATRIX M){
	cout<<"\n First Matrix \n===+++====+++==\n";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<" ,"<<matrix[i][j];
		}
		cout<<"\n";
	}
	cout<<"\n Second  Matrix \n===+++====+++==\n";
	for(i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<" ,"<<M.matrix[i][j];
		}
		cout<<"\n";
	}
	if(flag == 0)
		cout<<"\n This MAtrix Are  Same";
	else
		cout<<"\n This MAtrix Are Not Same";
	getch();
}
void main(){
	clrscr();
	MATRIX M,M1;

	M==M1;

	M.Display(M1);
}