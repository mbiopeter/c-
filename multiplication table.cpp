//Multiplication table from 2 to 9;

#include <iostream>
#include <stdlib.h>

using namespace std;

class multiplication{
	public:

void multiply(){
	system("Color 1f");
	
int i = 1;
int x = 2;
int answer;
	
while((i <= 10) && (x <= 10)){
	
	
	if(i == 10){
		cout <<endl;
		cout <<endl;
		cout <<endl;
		++x;
		i=1;
		
	}
	
	answer = x * i;
	
	cout << x <<" * "<< i <<" = "<< answer << endl;
	++i;
}	
}	
};

int main(){
	multiplication get;
	get.multiply();
	
	return 0;
}