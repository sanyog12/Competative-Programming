#include<iostream>
using namespace std;

class complex{
	
	int real, img;

	public:
	void acceptParamater(int , int);
		
	void getData(){
	    cout<<"Enter the real and img value"<<endl;
	    cin>>real>>img;
	    	
	}
	void diaplay(){
	    cout<<"complex no is "<<real<<"+"<<img<<"i"<<endl;
	}
	void setData(int r , int i){
	    real = r;
	    img = i;
	}
	int getReal(){
	    return real;
	}
	
};
void Complex:: acceptParamater(int r, int i){
    real = r;
    img = i;
}
int main(){
    Complex c1;
    cout<<"size of object c1 is "<<sizeof(c1)<<endl;
    c1.getData();
    c1.diaplay();
    Complex c2;
    
}