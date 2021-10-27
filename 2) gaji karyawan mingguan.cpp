#include <iostream>
#include <conio.h>
using namespace std;

int main (){
	string nama;
	char golongan;
	int jam = 0, jumlah, total;
	cout<< "\n";
	cout<< "\t\t 	============================== " << endl;
	cout<< "\t\t 	         ~ PT MAKMUR ~			" << endl;
	cout<< "\t\t	============================== " << endl;		
	cout<< "\n";
	cout<< "______________________________________________________________________________";
	cout<< "\n" << endl;
	cout<< " Nama Karyawan		: ";					
	cin >> nama;
	cout<< " Lama Jam Kerja		: ";					
	cin >> jam;
	cout<< " Golongan Karyawan [A/B/C/D]	: ";		
	cin>> golongan;

	switch (golongan){
		case 'A' :
			jumlah = 5000;
			break;
		case 'B' :
			jumlah = 7000;
			break;
		case 'C' :
			jumlah = 8000;
			break;
		case 'D' :
			jumlah = 10000;
	}

	total = jam*jumlah;
	
	if ((jam-48)>0) {
	     total = total+((jam-48)*4000);
	}

	cout<< endl;
	cout<< endl;
	cout<< " ========== GAJI MINGGU INI =========== " << endl;
	cout<< " Nama Karyawan		: " << nama << endl;
	cout<< " Jumlah Gaji		: " << total << endl;
}
