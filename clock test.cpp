#include <iostream>
#include <windows.h>

using namespace std;

class clock{
	public:
		void time(){
			system("Color 1f");
			int h,m,s,v;
			s=0;
			v=0;
			cout <<"Enter time hour: ";
			cin >>h;
			cout <<"Enter time minutes: ";
			cin >>m;
			while(v==0){
				cout <<h <<":" <<m <<":"<<s <<endl;
				Sleep(1000);
				s++;
				if(s >= 60){
					s=0;
					m++;
				}
				if(m >= 60){
					m=0;
					h++;
				}
				if(h >= 24){
					h=0;
				}
				else{
				system("cls");	
				}
			}

			
		}
	
	
};

int main(){
	clock get;
	get.time();
	return 0;
}