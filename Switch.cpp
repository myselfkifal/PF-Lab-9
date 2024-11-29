#include <iostream>
using namespace std;
int main()
 {

char grade;
cout<<"Enter your Grade:";
cin>>grade;

switch (grade)
{
case 'A':
  cout<<"Ur Grade is A";
    break;
case 'B':
cout<<"Ur Grade is B";
break;
case 'C':
cout<<"Ur Grade is C";
break;
default:
cout<<"Your Grade is other than A,B,C";
 }
 return 0;
 }