#include<iostream.h>
#include<conio.h>

int main()

{
	int time;
	cout<<"enter the time";
	cin>>"time";
	clrscr();
	if(time<12)
	{
	cout<<"good morning";
	}
	else if(time>12&time<17)
	{
	cout<<"good afternoon";
	}
	else
	{
	cout<<"good evening";
	}
	getch();
	return 0;

	}
