#include <iostream>
using namespace std;
int main()
 {

char alphabet;
cout<<"Enter any Alphabet:";
cin>>alphabet;

switch (alphabet) {

case 'a':
case 'A':
cout<<"A is Vowel";
break;

case 'e':
case 'E':
cout<<"E is a Vowel";
break;

case 'i':
case 'I':
cout<<"I is a Vowel";
break;

case 'o':
case 'O':
cout<<"O is a vowel";
break;

case 'u':
case 'U':
cout<<"U is a vowel";
break;

default:
cout<<"Enter another Alphabet";
 }
return 0;
 }