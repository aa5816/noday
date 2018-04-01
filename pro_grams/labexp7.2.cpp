/*stack linked list implementation with try and catch block*/
#include<iostream>
#include<new>
#include<cstdlib>
using namespace std ;
 struct node
{
    int k;
    struct node* next;
}*nptr,*st,*ptr;

node* cnn(int ); //for new node
void insb (node*);//insertion in the beginning
void disp (node*);//for displaying the list
void dele ();//for deletion at the beginning
int main()
{ int inf,ch=1;
   st==NULL; nptr=NULL;
   while (ch==1)
   {    cout<<"enter info of new node"<<endl; cin>>inf;
       nptr= cnn(inf);
      if (nptr==NULL){ return -1; }
      insb (nptr);
      cout<<"inserted at the beginning"<<endl;
      cout<<"do you want to continue, enter 1 for yes"<<endl; cin>>ch;
   }
  do
   {cout<<"do you want to perform deletion at the beginning,enter 1 for yes"<<endl; cin>>ch;
   if (ch==1)
    dele (); }while (ch==1);

   cout<<"here is your list"<<endl;
   disp(st);
delete st,nptr;
return 0;
	}

node* cnn (int n)
{ try
{ptr=new node;}
catch (bad_alloc xa)
{ cout <<"Allocation Failure"<<endl; return NULL ;} //checks if there is any space in heap memory
     ptr->k=n;
     ptr->next=NULL;
return ptr;
}

void insb ( node* np)
{  if (st==NULL)
    st=np;
   else
   { ptr=st;
     st=np;
     np->next=ptr;
   }
}
void disp (struct node* np)
{   while (np)
     { cout<<np->k<<endl;
       np=np->next;
      }

}
void dele ()
{ ptr=NULL;
  if (st==NULL)
  {cout<<"underflow"<<endl; exit(1);}
  ptr=st;
  st=st->next;
  delete ptr;
  }
