#include <iostream>
using namespace std;
int main()
{

char Grade;
cout<<"Enter Grade is:";
cin>>Grade;

switch (Grade)
{

    case 'A':
    cout<<"Excellent";
    break;
    case 'B':
    cout<<"Good";
    break;
    case 'C':
    cout<<"Average";
    break;
    case 'D':
    cout<<"Poor";
    break;
    case 'F':
    cout<<"Unsatisfied";
    break;

    default:
    cout<<"Invalid. Enter A,B,C,D,or,F";

}
























    return 0;
}