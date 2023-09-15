/******************************************************************************

•	Write a Student class and use it in your program. 
Store the data of 10 students and display the sorted data according 
to their roll numbers, dates of birth, and total marks.
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
class Student
{
    int rollNo;
    int DOB;
    int totalMarks;
    public:
    Student(){
        cin>>rollNo;
        cin>>DOB;
        cin>>totalMarks;
    }
    void getData(){
        cout<<"rollNo "<<rollNo<<" DOB "<<DOB<<" totalMarks "<<totalMarks<<endl; 
    }
};
int main()
{
    int i = 2;
    Student s[i];
    for(int j = 0; j < 2; j++){
        s[j].getData();
    }
    

    return 0;
}
