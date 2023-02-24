#include<iostream>
#include <stdlib.h>

using namespace std;

class animal{
private:
int age;

public:
void setname(int age){
	system("Color 1f");
      cout <<name <<endl;
      system("Color 1f");
}
 int getname(){
    return age;
 }

};

using namespace std;

int main(){
	
animal cow;
cow.getname(20);

    return 0;
}