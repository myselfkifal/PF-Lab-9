#include <iostream>
using namespace std;
int main()
{
int month;
cout<<"Enter a Integer:";
cin>>month;

switch (month){
case '12':
cout<<"Winter";
break;

case '2':
case '3':
case '4':
case '5':
cout<<"Summer";
break;
case '6':
case '7':
case '8':
case '9':
case '10':
cout<<"Spring";
break;

case '11':
case '1':
cout<<"Autumn";
break;

default:
cout<<"Enter another Integer";
}
    return 0;
}