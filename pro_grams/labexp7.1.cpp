/*1. Write a program which accepts a number and a divisor to divide it. If the divisor is zero the program terminates abruptly. Modify the program by adding exception handling in it and prevent abnormal termination.*/

#include<iostream>
using namespace std;

int main ()
{ float a,b;
  cout<<"enter a number and its divisor"<<endl; cin>>a>>b;
  try
{  if (b==0)
   throw b;
   cout<<"after division ..."<<endl<<a/b<<endl;
}
catch (float b)
{ cout<<"re-enter b, should not be zero"<<endl; cin>>b;
  cout<<"after division ..."<<endl<<a/b<<endl;
}
return 0;
}
