#include<iostream>
using namespace std ;
class hy; class su;
class ox
{ int l;
   public :
   friend void mol(ox ,hy ,su);

 ox (int k)
  { l=k;}
};

class hy
{ int l;
  public :
  friend void mol(ox, hy,su);

 hy (int k)
  { l=k;}
};

class su 
{ int l;
 public :
  friend void mol(ox , hy ,su);
 su (int k)
  { l=k;}
};

void mol (ox o,hy h,su s)
{ if ( o.l==4||h.l==2||s.l==1)
   cout<<"SULPHURIC ACID"<<endl;
  }

int main ()
{ int i,j,y;
  cout<<"enter molec. values for oxygen,hydrogen,sulphur"<<endl;
  cin>>i>>j>>y;
  ox o=i; 
  hy h=j; 
  su s=y;
  cout<<"the compound is"<<endl;
  mol (o,h,s);
return 0;
}

