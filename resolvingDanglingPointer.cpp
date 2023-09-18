//default destructor 
#include <iostream>
#include<string.h>
using namespace std;

class string1{
	int len;
	char * ptr;
	public:
		string1(char*);
		void stringDisplay();
		~string1();
		string1(string1&);
	};
void string1:: stringDisplay(){
    cout<<"len is: "<<len<<endl;
    cout<<"string is: "<<ptr<<endl;
}
string1::string1(char* sptr){
    len = strlen(sptr);
    ptr = new char[len+1];
    strcpy(ptr,sptr);
}

string1::~string1(){
    cout<<"destructor is called"<<endl;
    if(ptr)
    delete [] ptr;
    ptr = NULL;
}
string1:: string1(string1 &c){
    this->len = c.len;
    this->ptr = new char[this->len+1];
    strcpy(this->ptr, c.ptr);
    
}

int main(){
	string1 c2("rahul");
	c2.stringDisplay();
	{
	    string1 c3(c2);
	    c3.stringDisplay();
	   
	}
	c2.stringDisplay();
	
	return 0;
} 
