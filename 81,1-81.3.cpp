#include <iostream>
#include <fstream>
#include <math.h> 
using namespace std;

int liczba=0;
int xa,ya,xb,yb,xc,yc;

void zadanie1()
{	
	ifstream plik("wierzch.txt");
	for (int i = 0; i < 9999; i++) {
		plik>>liczba;
	}
	plik.close();
   if ((xa>0) && (ya>0) && (xb>0) && (yb>0) && (xc>0) && (yc>0))
    {
 	liczba++;
 	}
   	cout<<"zadanie 81.1"<<endl;
   	cout<<endl;
 	cout<<liczba;
 	cout<<endl;
 	cout<<endl;
}

void zadanie2()
{	
	int maks;
	ifstream plik("wierzch.txt");
	for (int i = 0; i < 9999; i++) {
		plik>>liczba;
	}
	plik.close();
  	double dl1 = sqrt((xc-xb)*(xc-xb)+(yc-yb)*(yc-yb));
  	double dl2 = sqrt((xc-xa)*(xc-xa)+(yc-ya)*(yc-ya));
 	double dl3 = sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
 		if (dl1>dl2)
		{
 			maks = dl1;
 		} 
 		else 
 		{
 			maks = dl2;
 		}
 		if (dl3>maks)
		{
 			maks = dl3;
 		}
 		if (2*maks == dl1+dl2+dl3)
		{
 		liczba++;
 		} 
 		
 		if ((yb-ya)*(xc-xb) == (yc-yb)*(xb-xa))
		{
 		liczba++;
 		} 
 		
 		cout<<"zadanie 81.2"<<endl;
 		cout<<endl;
 		cout<<liczba;
 		cout<<endl;
 		cout<<endl;
}

void zadanie3()
 {
 	int obwod;
	int najdluzszy;
	ifstream plik("wierzchTR.txt");
	for (int i = 0; i < 9999; i++) {
		plik>>najdluzszy;
	}
	plik.close();
	obwod = sqrt((xc-xb)*(xc-xb)+(yc-yb)*(yc-yb))
 	+sqrt((xc-xa)*(xc-xa)+(yc-ya)*(yc-ya))
 	+sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
 	
 	if (obwod>najdluzszy) {
 		najdluzszy = obwod;
 	}
 	
 	cout<<"zadanie 81.3"<<endl;
 	cout<<endl;
 	cout<<obwod;
 	cout<<endl;
}

int main() {

    zadanie1();
  	zadanie2();
    zadanie3();
}

