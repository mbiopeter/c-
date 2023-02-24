#include <iostream>

using namespace std;

class decraration{
	public:

};
class calculation : public decraration {
	public:
	void addition(){
		answer = num_one + num_two;
		cout <<num_one <<" + "<< num_two <<" = " << answer;
	}
	void subtraction(){
		answer = num_one - num_two;
		cout <<num_one <<" - "<< num_two <<" = " << answer;
	}
	void division(){
		answer = num_one / num_two;
		cout <<num_one <<" / "<< num_two <<" = " << answer;
	}
	void multiplication(){
		answer = num_one * num_two;
		cout <<num_one <<" * "<< num_two <<" = " << answer;
	}
}


int main(){
	char oper;
	float num_one;
	float num_two;
	float answer;
	cout <<"Enter the first number: ";
	cin>>num_one;
	cout <<"Enter the second number: ";
	cin >>num_two;
	cout <<"Enter the operator: ";
  	cin >>oper;
	
	calculation calculate;
	if(oper == '-'){
		calculate.subtraction();	
	}
	else if(oper == '+'){
		calculate.addition();
	}
	else if(oper == '/'){
		calculate.division();
	}
	else if(oper == '*'){
		calculate.multiplication();
	}
	else{
		cout<<"Syntax error!";
	}
	
	
	return 0;
}