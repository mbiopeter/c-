#include <iostream>
#include <windows.h>

using namespace std;

class waterFlow{
	public:
		int i ;
		
void start(){
	for(i = 1; i >=1;i++){
	Sleep(1000);
	cout<<i<<" seconds\n";
	if(i <= 3){
		cout <<"The water flows using 0.01 bars\n";	
	}
	if(i > 3 && i <= 60){
		cout <<"The water flows using 0.02 bars\n";
	}
	if(i > 60 ){
		cout <<"The water flows using 0.01 bars\n";	
		
	}
	}
	}

	
};

int main(){
	int distance;
	cout <<"The senser senses the distance between the tap and the glass of water in mm.\n";
	cout <<"Enter the distance between the tap and the glass of water in mm: ";
	cin >> distance;
	
	waterFlow pour;
	
	if(distance <= 30){
		pour.start();
		
	}
	else{
		cout <<"The water immediatly stops flowing.";
		
	}
	return 0;
}