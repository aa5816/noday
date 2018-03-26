/*3. Write a C++ program to implement the above multi-path inheritance, declaring the base class (i.e. Student) as virtual. Take functions as student_Details ( ) and display_Student_Details ( ) and name, roll no, and gender as data members. Members of Internal Exam class are array of internal exam for six subjects and a function get_InternalMarks () for getting internal marks and display_InternalMarks (). Members of External Exam class are array of external exam for six subjects and a function get_ExternalMarks () for getting external marks and display_ExternalMarks (). Members of Result class are and display Results ( ).*/

#include<iostream>
using namespace std ;

class student
{ char name[20],gen; int rno;
 public :
void st_details ( )
{ cout<<"enter name,gender,roll no "<<endl; cin>>name>>gen>>rno; }
void disp_st_details ()
{ cout<<"name,gender,roll no are"<<endl<<name<<endl<<gen<<endl<<rno<<endl;}
};

class intexam : virtual public student
{  float iex [6];
  public :
void get_intmarks ();
void disp_intmarks ();
};

void intexam::get_intmarks ()
{ cout<<"enter the internal marks of 6 subjects"<<endl;
  for (int i=0;i<6;i++)
  cin>>iex[i]; }

void intexam::disp_intmarks ()
{ cout<<"internal marks are"<<endl;
  for (int i=0;i<6;i++)
 {  cout<<"for subject  "<<i+1<<endl; cout<<iex[i]<<endl;}
}

class extexam : virtual public student
{ float eex [6];
public :
void get_extmarks ();
void disp_extmarks ();
};

void extexam::get_extmarks ()
{ cout<<"enter the external marks of 6 subjects"<<endl;
    for (int i=0;i<6;i++)
  cin>>eex[i]; }

void extexam::disp_extmarks ()
{ cout<<"external marks are"<<endl;
  for (int i=0;i<6;i++)
 {  cout<<"for subject  "<<i+1<<endl; cout<<eex[i]<<endl;}
} 

class results : public intexam,public extexam
{ public :
  void get ()
{ st_details (); get_intmarks (); get_extmarks (); }
void show ()
{ disp_st_details (); disp_intmarks (); disp_extmarks (); }
} r;

int main ()
{ cout<<"WELCOME TO STUDENT RESULT CENTER, ENTER STUDENT DETAILS"<<endl;
   r.get ();
  cout<<"THE STUDENT RESULT IS "<<endl; 
  r.show ();
return 0;
} 
 
