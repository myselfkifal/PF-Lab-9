#include <iostream>
using namespace std;
int main()
{
char Traffic_Light;
cout<<"Enter traffic Light:";
cin>>Traffic_Light;

switch (Traffic_Light)
{
case 'R':
cout<<"Stop";
break;

case 'G':
cout<<"Go";
break;

case 'Y':
cout<<"Slow down";
break;

default:
cout<<"Invalid. Enter R,G,Y";
}
    return 0;
}