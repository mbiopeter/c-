#include <iostream>
#include<stdlib.h>

using namespace std;

class youtube_channel{
public:
	string name;
	string purpose;
	int subscribers;
	
};

int main(){
	system("Color 1f");
	youtube_channel channel;
	channel.name ="Regae music Lyrics";
	channel.purpose ="Creating a well understandable lyrics in a more attractive way.";
	channel.subscribers =407;
	
	cout <<"Channel name: "<<channel.name  <<endl;
	cout <<"Description: "<<channel.purpose <<endl;
	cout <<"Number of subscribers: "<<channel.subscribers <<endl;

	return 0;
}