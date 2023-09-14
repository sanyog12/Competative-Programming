#include <iostream>
#include<cstring>
using namespace std;
class student{
  int rollno;
  char name[50];
  public:
  student(int rollno, char* name){
    this->rollno = rollno;
    strcpy(this->name , name);
  }
  void display(){
      cout<<rollno<<" "<<name;
  }
};

int main()
{
    char s[50] = "hello";
    student s1(45,s);
    s1.display();
}
