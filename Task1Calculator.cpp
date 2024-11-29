#include <iostream>
using namespace std;
int main()
 {

int num1, num2;
char opt;
cout<<"Enter first Number:";
cin>>num1;
 
cout<<"Enter Operator:";
cin>>opt;

cout<<"Enter Second Number:";
  cin>>num2;


switch (opt)
{
case '+':
  cout<<"The sum of two numbers is:"<<num1+num2;
    break;
case '-':
cout<<"Subtraction of Two numbers is:"<<num1-num2;
break;
case '*':
cout<<"Product of two numbers is:"<<num1*num2;
break;
case '/':
cout<<"Division of two numbers is:"<<num1/num2;
break;
default:
cout<<"Enter Another Operator";
 }
 return 0;
 }