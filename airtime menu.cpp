#include <iostream>
#include <stdlib.h>

using namespace std;

class page1{
	public:
		void home(){
			system("Color 1f");
			int code;
			int choise;
			cout <<"Enter the value. Example 123 instead of *123#.\n";
			cin >>code;
			switch(code){
			case 544:
				cout <<"0.Sh20=1GB for 1hr\n";
				cout <<"1.Data Deals (Valentine)\n";
				cout <<"2.Daily Bundles\n";
				cout <<"3.Weekly Bundles\n";
				cout <<"4.Go MONTHLY\n";
				cout <<"5.No Expiery\n";
				cout <<"6.Video Bundles\n";
				cout <<"7.Okoa Data\n";
				cout <<"8.Lipa Mdogo\n";
				cout <<"9.Data Plus NEW\n";
				cout <<"10.Hot Minutes\n\n";
				cout <<"Enter Your choise:\n\n ";
				cin >>choise;
				system("cls");
				
				switch(choise){
					case 0:
						cout <<"You have succesfully purchased 1024MB valid for the next one hour.\n\n";
							break;
					case 1:
						cout <<"0.Valentine-Sh 100=2GB 24Hr\n";
						cout <<"1.Sh50=1.5GB+1.5GB MORE for 3hr\n";
						cout <<"2.Sh5=240MB 1hr\n";
						cout <<"3.Sh20=1GB 1hr\n";	
						cout <<"4.Sh5=50MB 24hr\n";	
						cout <<"5.Sh250=2GB 30Days\n";	
						cout <<"6.Sh500=5GB 30Days\n";
						cout <<"7.TUNUKIWA\n";	
						cout <<"8.Unclock Baze Bonus\n";
						cout <<"Enter Your choise:\n\n ";
				   	   	cin >>choise;
				   	   	system("cls");
	  	  	  			  switch(choise){
								case 0:
									cout <<"You wil receive an SMS SHortly.\n";
									break;
								case 1:
									cout <<"You have succesfully purchased 1.5GB+1.5GB valid for the next 3hrs.\n";
									break;
								case 2:
									cout <<"You have succesfully purchased 240MB  valid for the next 1hr.\n";
									break;
								case 3:
									cout <<"You have succesfully purchased 1GB  valid for the next 1hr.\n";
									break;		
								case 4:
									cout <<"You have succesfully purchased 50MB  valid for  24hrs.\n";
									break;	
								case 5:
									cout <<"You have succesfully purchased 2GB  valid for  30Days.\n";
									break;	
								case 6:
									cout <<"You have succesfully purchased 5GB  valid for  30Days.\n";
									break;																														
								default:
									cout <<"Invalid choise.";
									break;
								}
							break;
					case 2:
						cout <<"1.Buy For My Number\n";
						cout <<"2.Buy For Other Number\n";
						cout <<"3.Stop Autorenew";	
						system("cls");	
							break;
					case 3:
						cout <<"1.Buy For My Number\n";
						cout <<"2.Buy For Other Number\n";
						break;	
					case 4:
						cout<<"All Bundless are valid for 30 days\n";	
						cout <<"0.Sh 1000 (5GB+2GB YT+400MINS +1000SMS)\n";
						cout <<"1.All in one\n";
						cout <<"2.Data plans\n";
						cout <<"3.Minutes plans\n";	
						cout <<"4.Join postpay\n";	
						cout <<"5.HOT Deals\n";	
						break;	
					case 5:
						cout <<"1.Buy For My Number\n";
						cout <<"2.Buy For Other Number\n";
						cout <<"3.Okoa Data\n";	
						cout <<"4.Stop Autorenew\n";	
						cout <<"5.Stop Autorefill\n";
						break;	
					case 6:
						cout <<"0.Unlock Baze Bonus\n";						
						cout <<"1.Youtube\n";
						cout <<"2.Showmax\n";
						cout <<"3.Baza video\n";	
						cout <<"4.Baze Music\n";	
						cout <<"5.Boomplay\n";	
						cout <<"6.Viusasa\n";
						cout <<"7.Education Bundles\n";	
						cout <<"8.Angaza\n";
						cout <<"9.Disney Games\n";	
						cout <<"10.Unsubsscribe\n";	
						break;
					case 7:
						cout <<"1.Okoa 675MB for Sh99 valid for 24hrs\n";
						cout <<"2.Okoa 270MB for Sh50 valid for 24hrs\n";
						cout <<"3.Okoa 900MB @Sh20 valid for 1hr\n";	
						cout <<"4.Okoa 90MB for Sh20 valid for 24hrs\n";
						break;
					case 8:	
						cout <<"Want to join lipa Mdogo Mdogo?Great!\nReview the terms of services at\nwww.safaricom.co.ke\n";
						cout <<"1.Accept\n";
						cout <<"2.Reject\n";
						cout <<"3.Pay for another\n";	
						cout <<"4.Know more abaut Lipa mdogo mdogo\n";	
						break;	
					case 9:
						cout <<"Data Plus Bundles comes with FREE\nGoogle Maps + Britam personal accident\ncover\n";
						cout <<"1.Sh 150 (Data plus 1800MB)\n";
						cout <<"2.Sh 110 (Data plus 1GB)\n";
						cout <<"3.Sh 55 (Data plus 300MB)\n";	
						cout <<"4.Make claim\n";
						cout <<"98.MORE";	
						break;	
					case 10:
						cout <<"0.Sh20 (30Mins, 3hrs)\n";						
						cout <<"1.70%-20% Extra Kredo\n";
						cout <<"2.50% Extra Kredo Calls & SMS (NO\nEXPIERY\n";
						cout <<"3.Tunukiwa Minutes\n";	
						cout <<"4.Okoa Minutes\n";	
						cout <<"5.Easy-Talk\n";	
						cout <<"6.SMS Deals\n";
						cout <<"7.Hot Minutes NEW\n";	
						break;																												
					default:

							break;	
					
				}

				break;
			default:
				cout <<"Invalid usd code";
				break;
			}
		}
	
};


int main(){
	page1 get;
	get.home();
	return 0;
}