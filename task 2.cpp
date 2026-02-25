#include <iostream>
using namespace std;

class Employee {
	virtual int calculateSalary()=0;

};
class FullTimeEmployee :protected Employee {
private:
	int salery;
public:
	void Salery(int s){
		salery = s;
	}
	
	int calculateSalary()override {
		return salery;
	}
};
class PartTimeEmployee :protected Employee {
private: 
	int houres;
	int value;
	int salery;
public:
	void Houres(int h) {
		houres = h;
	}
	void Value(int v) {
		value = v;
	}
	int calculateSalary()override {
		salery = houres * value;
		return salery;
	}
};


int main() {
	FullTimeEmployee p;
	p.Salery(150000);
	cout << "Salery of a fulltime employee is:  " << p.calculateSalary() << endl;
	PartTimeEmployee q;
	q.Houres(150);
	q.Value(3000);
	cout << "Salery of a parttime employee is:  " << q.calculateSalary();
	return 0;
}