 #include <iostream>

using namespace std;

class student{
	int a = 10;
	public:
	student show(student &s2){
		student s3;
		s3.a = this->a + s2.a;
		return s3;
	}
	void throws(){
		cout<<a;
	}
};
int main()
{
    student s1;
    student s2;
   	
	student	s4 =  s1.show(s2);
	s4.throws();
    return 0;
}
