#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

class area{
	private:
		float width;
		float lenght;
		float area;
		public:
			void setvalues(float width,float lenght){
				system("Color 1f");
				area = lenght * width;
				
			}
			float getvalue(){
				system("Color 1f");
				cout <<"The area is: "<< area;			
				return area;
			}
};
int main(){
	area circle;
	circle.setvalues(10,2);
	circle.getvalue();
	return 0;
}