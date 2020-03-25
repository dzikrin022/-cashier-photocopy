#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

main(){
	string nm;
	int hrg=225;
	int lbr;
	float ptg, by;
	cout<<"     ***Aplikasi Ongkos Fotocopy***     \n\n\n"<< endl;
	cout<< "INPUT DATA"<<endl;
	cout<< "Nama Konsumen : ";
	getline(cin,nm);
	cout << "Banyaknya Lembar : ";
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
	cout << "\n\nHASIL PERHITUNGAN" << endl;
	cout << "Nama Konsumen : "<< nm << endl;
	cout << "Banyaknya Lembar : "<< lbr << endl;
	cout << "Biaya Fotocopy : Rp."<< by << endl;
	cout << "Potongan : Rp."<< ptg << endl;
	cout << "============================"<< endl;
	cout << "Total Pembayaran : Rp."<< by-ptg << endl;
	getch();
}
 
