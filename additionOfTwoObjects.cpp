 #include <iostream>

using namespace std;

class student{
	int a = 10;
	public:
	void show(student &s2){
		student s3;
		s3.a = this->a + s2.a;
		cout<<s3.a;
	}
};
int main()
{
    student s1;
    student s2;
    s1.show(s2);

    return 0;
}