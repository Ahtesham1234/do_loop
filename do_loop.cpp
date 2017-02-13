// do_loop.cpp
// demonstrates DO Loop

#include <iostream>

using namespace std;

int main()
{
long dividend,divisor;
char ch;

do
{
cout<<"Enter dividend:  ";cin>>dividend;
cout<<"Enter divisor:   "; cin>>divisor;
cout<<"Quotient is:  "<< dividends % divisor;

cout<< "\n Do another calculation ? (y/n):  ";    //repeat the program
cin>>ch;
}
while (ch  !=  'n' );    //loop condition
return 0;
}
