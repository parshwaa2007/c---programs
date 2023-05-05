#include<iostream.h>
#include<conio.h>
class student
{

	int rollno;
	char name[10];
	float percent;

	public:
	void getdata(void)
	{
	 cout<<"enter the student number";
	cin>>rollno;
	cout<<"enter the name of student";
	cin>>name;
	cout<<"enter the percentage";
	cin>>percent;
 }
	void putdata(void)
 {
	cout<<"\nstudent number is:\t"<<rollno;
	cout<<"\nstdents name is:\t"<<name;
	cout<<"\nstudents percent is:\t"<<percent;

 }
 };

 void main()

 {
  student s;
  s.getdata();
  s.putdata();
  getch();
   }