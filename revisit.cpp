
#include <iostream>
using namespace std;

class Complex{
  public:
  void show() const{
      cout<<"bye"<<endl;
  }
  void show(){
      cout<<"hello"<<endl;
  }
  
};

int main(){
    Complex c1;
    c1.show();
    const Complex c2;
    c2.show();



    return 0;
}

