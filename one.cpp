#include <iostream>
#include <stdlib.h>

using namespace std;

class comuputer{
    public:
    void hardware(){
    	system("Color 1f");
        cout <<"Hardware are necesary for human interaction with the computer";
    }
    void software(){
    	system("Color 1f");
        cout <<"For a computer to operate as intended, it must have software programes";
    }

};
class client : public comuputer {
     public:
     void location(){
     	system("Color 1f");
        cout <<"Client machine are computer programes that user interact with directly ";
     }
     void requirements(){
     	system("Color 1f");
        cout <<"You don't have to be connected with the internet to access data on client server";
     }


};

class server : public comuputer{
     public:

     void location(){
     	system("Color 1f");
        cout <<"server machine are computer programes that are located on the server and user has no direct control of it ";
     }
     void requirements(){
     	system("Color 1f");
        cout <<"You need to be connected to the internet to access information on the server machine";
     }
};

int main(){
    server proxy;
    proxy.location();
    return 0;
}