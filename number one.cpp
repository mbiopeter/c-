#include <iostream>

using namespace std;

class computer{
	public:
	void contains(){
		cout <<"A computer is made of hardware and sofware"<<endl;
	}
	
	
};
class Client : public computer{
	public:
			void location(){
		cout <<"it is located on the client machine"<<endl;
	}
	
};

class server : public computer{
	public:	
			void connection(){
		cout <<"Internet connection is required to acces server"<<endl;
	}
	
};

int main(){
	computer get;
	get.contains();
	Client name;
	name.location();
	server nam;
	nam.connection();
	
	return 0;
}