/*1. Write a program which designs a template that performs multiplication of : a. ‘int’ type data b. ‘float’ type data */

#include<iostream>
using namespace std ;

template <class t1> void mulp (t1 k,t1 l)
{ cout<<"product is"<<endl<<k*l<<endl; }

int main ()
{ int i,j; float m,n;
  cout<<"enter two int value to get their product"<<endl; cin>>i>>j;
  mulp (i,j);
   cout<<"enter two float value to get their product"<<endl; cin>>m>>n;
  mulp (m,n);
return 0;
}
