/*1. Write a program to implement the Binary Operator Overloading with and without using friend functions*/

#include <iostream>
using namespace std;

class location //for location in longitude and latitude 
{
int longitude, latitude;
public:
location () {}

location (int lg, int lt) 
{
longitude = lg;
latitude = lt;
}
void show () ;
location operator+(location op2); // Overload + for loc.
};

location location::operator+(location op2)
{
location temp;
temp.longitude = op2.longitude + longitude;
temp.latitude = op2.latitude + latitude;
return temp;
}

void location::show() 
{
cout << " longitude is "<<endl<<longitude<<endl ;
cout << "latitude is"<<endl<<latitude<<endl;
}

int main()
{  int l,k,s,t; cout<<"enter 2-2 longitude,latitude values"<<endl; cin>>l>>k>>s>>t;
location ob1(l,s), ob2(k,t);
ob1.show(); 
ob2.show(); 
ob1 = ob1 + ob2;
ob1.show(); // displays sum of longitude and latitude
return 0;
}


