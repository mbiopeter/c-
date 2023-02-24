#include <iostream>
#include <stdlib.h>

using namespace std;
class shape{
	
	public:
	void square(){
		system("Color 1f");
		cout  <<"This is a square\n";	
	}	
	void trangle(){
		system("Color 1f");
		cout << "This is a triangle\n";
	}	
};

int main(){
	shape get;
	get.square();
	shape see;
	see.trangle();
	return 0;
}