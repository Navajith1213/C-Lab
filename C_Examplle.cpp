#include <iostream>
using namespace std;
class Adder {
private:
	int a,b,sum;
public:
	void read(int,int);
	void Sum();
	int get_sum();
	void print_sum();
};

void Adder::read(int a, int b) {
	this-> a=a;
	this-> b=b;
}
void Adder::Sum() {
	sum = a+b;
}
int Adder::get_sum() {
	return sum;
}
void Adder::print_sum() {
	cout<<"The sum of the given two numbers is:"<<sum;
}
int main() {
	int x,y;
	cout<<"Enter first number:";
	cin>>x;
	cout<<"Enter second number:";
	cin>>y;
	Adder adder_func;
	adder_func.read(x,y);
	adder_func.Sum();
	adder_func.get_sum();
	adder_func.print_sum();
	cout<<"\nSum after return:"<<adder_func.get_sum();
	adder_func.get_sum();
	return 0;
}