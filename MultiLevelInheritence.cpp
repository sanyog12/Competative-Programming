#include<iostream>
using namespace std;

class emp{
	int id;
	public :
	emp(){
		cout<<"Default of emp"<<endl;
		id = 0;
	} 
	emp(int id){
		cout<<"Para of emp "<<endl;
		this->id = id;  
	}
	void display(){
		cout<<"Id : "<<id<<endl;
	}
};


class wageemp : public emp
{
	int hr,rate;
	public :
		wageemp(){
			hr = 0;
			rate = 0;
		}
		wageemp(int id,int hr,int rate):emp(id)
		{	
			cout<<"Para of Wageemp : "<<endl;
			this->hr = hr;
			this->rate = rate;
		}
		
		int findsalary(){
			return (hr * rate);
		}
		
		void display(){
			emp::display();
			cout<<"Hrs : "<<hr<<endl;
			cout<<"Rate : "<<rate<<endl;
		}
}; 

class salesP : public emp,public wageemp
{
	int sales,comm;
	public:
		salesP(){
			sales = 0;
			comm = 0;
		}
		salesP(int id,int hrs,int rate, int sales,int comm):wageemp(id,hrs,rate),emp(id)
		{//para constr
			cout<<"Para of salesP "<<endl;
			this->sales = sales;
			this->comm = comm;
		}
		int salry(){
			return (wageemp::findsalary() ) + (sales * comm);
		}
		void display(){
			wageemp::display();
			cout<<"sales : "<<sales<<endl;
			cout<<"commission : "<<comm<<endl;
			cout<<"Salary : "<<salry();
		}
};
int main(){
	salesP obj(11,101,250,21000,50);
	obj.display();
	
}