#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

main(){
	string nm;
	int hrg=225; //cost per sheet
	int lbr;
	float ptg, by;
	cout<<"     ***Photocopy Cost App***     \n\n\n"<< endl;
	cout<< "INPUT DATA"<<endl;
	cout<< "Consument Name : ";
	getline(cin,nm);
	cout << "Many of Sheet : ";
	cin >> lbr;
	by=lbr*hrg;
	if(lbr<100){
		ptg=(5*by)/100;
	}
	else if(lbr >= 100 && lbr <= 300) {
		ptg=(15*by)/100;
	}
	else {
		ptg=(20*by)/100;
	}
	cout << "\n\nTHE CALCULATION RESULT" << endl;
	cout << "Consument Name : "<< nm << endl;
	cout << "Many of Sheet : "<< lbr << endl;
	cout << "Photocopy Cost : Rp."<< by << endl;
	cout << "Discount  : Rp."<< ptg << endl;
	cout << "============================"<< endl;
	cout << "Total : Rp."<< by-ptg << endl;
	getch();
}
 
