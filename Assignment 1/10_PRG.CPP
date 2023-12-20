#include<conio.h>
#include<iostream.h>
class MATRIX
{
	int matrix[3][3],row[3],column[3];
	int n;
	public:
	int i,j;
	MATRIX()
	{
		n=3;
	}
	void Get_Matrix_Value();
	void Process();
	void Put_Matrix();
};
void MATRIX::Get_Matrix_Value()
{
	cout<<"\n Enter Value Of 3 X 3 Matrix :- \n";
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			cin>>matrix[i][j];
}
void MATRIX::Process()
{
	for(i=0; i<n; i++)
	{
		row[i] = 0;
		column[i] = 0;
		for(j=0; j<n; j++)
		{
			row[i] += matrix[i][j];
			column[i] += matrix[j][i];
		}
	}
}
void MATRIX::Put_Matrix()
{
	cout<<"\n BELOW THE MATRIX IS PRINT...."<<endl<<"================================"<<endl;

	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			cout<<matrix[i][j]<<", ";
		}
		cout<<endl;
	}
	cout<<"\n\n";
	for(i=0; i<n; i++)
		cout<<row[i]<<", ";
	cout<<"\n\n";
	for(i=0; i<n; i++)
		cout<<column[i]<<", ";
}
void main()
{
	clrscr();
	MATRIX M;
	M.Get_Matrix_Value();
	M.Process();
	M.Put_Matrix();
	getch();
}