
#include <iostream> 
using namespace std; 

// Function to calculate area of circle 
class getarea{
	public:
void calculateArea(float radius) { 
	cout << "the area of a circle is "<<(3.14 * radius * radius); 
} 

// Function to calculate area of rectangle 
void calculateArea(float length, float breadth) { 
	cout << "the area of a rectangle is "<<(length * breadth); 
} 
};
int main() 
{ 
	float radius, length, breadth; 
 getarea get;
 get.calculateArea(7.0,2.0);
	return 0; 
}