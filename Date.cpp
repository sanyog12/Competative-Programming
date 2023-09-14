#include <iostream>
using namespace std;
class Date{
    
    int date, month, year;
    public:
    void acceptPara(int, int, int );
    int getDate(){
        return date;
    }
    int getMonth(){
        return month;
    }
    int getYear(){
        return year;
    }
    void setData(int Date, int month, int year){
        this->date = date;
        this->month = month;
        this->year = year;
    }
    void display(){
        cout<<"Date "<<date<<" month "<<month<<" year "<<year<<endl;
    }
    void acceptData(){
    cout<<"enter the date"<<endl;
    cin>> date >> month >> year;
    }
    
        
};
void Date::acceptPara(int d, int m, int y){
    date = d;
    month = m;
    year = y;
}

int main(){
    Date d1;
    cout<<"size of obj "<<sizeof(d1)<<endl;
    d1.acceptData();
    d1.display();
    d1.setData(12,9,23);
    cout<<"Date "<<d1.getDate()<<" month "<<d1.getMonth()<<" year "<<d1.getYear()<<endl;
    d1.acceptPara(12,9,24);
    d1.display();
}