#include <iostream>
#include <stdlib.h>

using namespace std;

class calculation{
	public:
	
	float num_one;
	float num_two;
	float answer;
	
		void addition(){
			system("Color 1f");
			cout <<"Enter the first number: ";
			cin>>num_one;
	   	   	cout <<"Enter the second number: ";
	   	   	cin >>num_two;
			answer = num_one + num_two;
			cout <<num_one <<" + "<< num_two <<" = " << answer;
		}
		void subtraction(){
			system("Color 1f");
			cout <<"Enter the first number: ";
			cin>>num_one;
	   	   	cout <<"Enter the second number: ";
	   	   	cin >>num_two;
			answer = num_one - num_two;
			cout <<num_one <<" - "<< num_two <<" = " << answer;
		}
		void division(){
			system("Color 1f");
			cout <<"Enter the first number: ";
			cin>>num_one;
	   	   	cout <<"Enter the second number: ";
	   	   	cin >>num_two;
			answer = num_one / num_two;
			cout <<num_one <<" / "<< num_two <<" = " << answer;
		}
		void multiplication(){
			system("Color 1f");
			cout <<"Enter the first number: ";
			cin>>num_one;
	   	   	cout <<"Enter the second number: ";
	   	   	cin >>num_two;
			answer = num_one * num_two;
			cout <<num_one <<" * "<< num_two <<" = " << answer;
		}
};

int main(){
		
	char oper;
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