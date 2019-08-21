#include<iostream>
using namespace std;

class Student
{
//roll  name and maths marks
int roll,marks;
string name;

public:
  // get details of this three private members
  void getdetails()
  {
    cout<<"enter roll:";
    cin>>roll;
    cout<<"enter marks:";
    cin>>marks;
    cout<<"enter name :";
    cin>>name;
  }
  //create a frnd funtion to print the values of private members
  void print_f()
  {
    cout << name;
  }
  friend void print(Student t);
};

void print(Student t)
{
  cout << t.roll << t.name << t.marks;
}

main()
{
  // take the number of objects from user
  int a;
  cout<<"enter number of students";
  cin>>a;
  //create n number of objects for class Student
  Student st[a];
  for(int i=0;i<a;i++)
  {
    st[i].getdetails();
  }

  // print details using friedn funtoin
  print(st[0]);

}
