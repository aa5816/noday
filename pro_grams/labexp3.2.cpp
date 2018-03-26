/* 2. Design the following hierarchy: Shape — Base class Rectangle --- Derived class of Shape Triangle --- Derived class of Shape main() should show the following menu: 1. Rectangle 2. Triangle 3. Exit. (Enter choice:_) A function calculate_area() should be made to calculate the area of the chosen shape.(Hint: Use concepts of inheritance, late binding, virtual functions and abstract class in the above program). */

#include<iostream>
using namespace std;

class shape 
{ 
protected :
 float d1,d2,a;
public :
   shape (float k,float l)
  { d1=k; d2=l;}
  virtual float calc_area ()=0;
};

class rectangle : public shape
{  public :
   rectangle (float k,float l) : shape (k,l) {}
  float calc_area ()
  { a=d1*d2;
     return a;}
};

class triangle : public shape
{ public :
 triangle (float k,float l) : shape (k,l) {} 
float calc_area ()
{ a=0.5*d1*d2;
  return a;}
};

int main ()
{ float a,b,c; int ch;
  shape *p;  
cout<<" ENTER THE CHOICE TO CALCUALTE AREA OF 1.RECTANGLE,2.TRAINGLE"<<endl; cin>>ch;
if (ch==1)
{ cout<<"enter length and breadth"<<endl; cin>>a>>b;
  rectangle r(a,b);
  p=&r;
  c=p->calc_area ();
  cout<<" AREA IS"<<endl<<c<<endl; }
else if (ch==2)
{  cout<<"enter base and height"<<endl; cin>>a>>b;
  triangle t(a,b);
  p=&t;
  c=p->calc_area ();
  cout<<" AREA IS"<<endl<<c<<endl; }
else 
cout<<"INVALID CHOICE"<<endl;
return 0;
}
