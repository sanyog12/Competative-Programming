
#include <iostream>

using namespace std;

class complex{
    int real , img;
    public: static int cnt;
    public:
    complex(){
        cout<<"default is invoked"<<endl;
        real = 5;
        img = 5;
        cnt++;
    }
    complex(int real, int img){
        cout<<"paramaterized constructor invoked"<<endl;
        this->real = real;
        this->img = img;
        cnt++;
    }
    static int getCnt(){
        return cnt;
    }
    
};
int complex :: cnt;

int main(){
    complex c1; 
    complex c2(10,20);
    cout<<"no of obj: "<<complex::getCnt()<<endl;
    cout<<"size of obj: "<<sizeof(c1)<<endl;
    cout<<complex::cnt;
    return 0;
}
