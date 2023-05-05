#include<iostream.h>
#include<conio.h>

int plusfun(int x,int y)
{
	return x+y;
}

double plusfun(double x, double y)
{
	return x+y;
}

int main()
{
	 int mynum1 =plusfun(6,9);
	 double mynum2 =plusfun(6.9,9.6);
	 clrscr();
	 cout<<"Int:"<<mynum1<<"\n";
	 cout<<"double:"<<mynum2;
	 getch();
	 return 0;
 }