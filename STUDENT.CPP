#include<iostream.h>
#include<conio.h>

{
 int rollno;
 char name[10];
 float percent;

 public:
 void getdata(void)
 {
 cont<<"enter the student number";
 cin>>rollno;
 cout<<"enter the name of student";
 cin>>name;
 cout<<"enter the percentage";
 cin<<percent;
 }
 void putdata(void)
 {
 cout<<"\nstudent number is:\t"<<rollno;
 cout<<"\nstdents name is:\t"<<name;
 coutr<<"\nstudents percent is:\t"<<percent;

 };

 void main()
 {
  clscrn();
  stdent s;
  s.getdata();
  s.putdata();
  getch();
  }