#include <iostream>
using namespace std;
int main()
{
    char Menu;
    int current_ammount =100000;
    cout<<"Display a menu"<<endl;
    cout<<"1. Deposit"<<endl;
    cout<<"2. Withdraw"<<endl;
    cout<<"3. Check Balance"<<endl;
    cout<<"4. Exit"<<endl;
    
    switch (Menu)
    {
        case '1':
        cout<<"Deposit the Amount";
        break;
        case '2':
        cout<<"Withdraw the Cash";
        break;
        case '3':
        cout<<"Check Balance";
        break;
        case '4':
        cout<<"Exit";
        break;

        default:
        cout<<"Enter another number";

    }
    return 0;
}