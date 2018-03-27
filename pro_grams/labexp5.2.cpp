/* 2. Write a generic function to sort the given elements in any order. This generic function must support int, char, and double types */

#include <iostream>
using namespace std ;

template <class X> void bubble(X *k, int s) 
{
int a, b;
X t;
for(a=1; a<s; a++)
{ for(b=s-1; b>=a; b--)
  { if(k[b-1] > k[b]) 
   {
    t = k[b-1];
    k[b-1] = k[b];
    k[b] = t;
   }
  }
} }

int main()
{
int iarray[7] = {7, 5, 4, 3, 9, 8, 6};
double darray[5] = {4.3, 2.5, -0.9, 100.2, 3.0};
char carray[6]={'f','c','j','h','u','z'};
int i;
cout << "Here is unsorted integer array: "<<endl;
for(i=0; i<7; i++)
cout << iarray[i] <<endl; 
cout << "Here is unsorted double array: "<<endl;
for(i=0; i<5; i++)
cout << darray[i] << endl;
cout << "Here is unsorted character array: "<<endl;
for(i=0; i<6; i++)
cout << carray[i] << endl;
bubble(iarray, 7);
bubble(darray, 5);
bubble(carray, 6);
cout << "Here is sorted integer array: "<<endl;
for(i=0; i<7; i++)
cout << iarray[i] <<endl;
cout << "Here is sorted double array: "<<endl;
for(i=0; i<5; i++)
cout << darray[i] << endl;
cout << "Here is sorted char array: "<<endl;
for(i=0; i<6; i++)
cout << carray[i] << endl;
return 0;
}
