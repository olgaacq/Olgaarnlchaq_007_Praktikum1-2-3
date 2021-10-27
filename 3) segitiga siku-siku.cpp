#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main(){
	int pilih;
	float a, t, sm, luas, keliling, hasil;
	
	cout << "\n";
	cout << "\t\t\t ~ MENGHITUNG SEGITIGA ~";
	cout << "\n";
	cout << "\t\t *************************************" << endl;
	cout << "\n" << "\n";
	cout << " MENU SEGITIGA SIKU-SIKU : \n";
	cout << "---------------------------" << endl;
	cout << " 1. Hitung Panjang Sisi Miring\n";
	cout << " 2. Hitung Luas\n";
	cout << " 3. Hitung Keliling\n";
	cout << " 4. Keluar Program\n\n";
	cout << " Pilihan: "; cin >> pilih; cout << "\n\n";
	
	switch (pilih) {
		case 1:
			cout << "\t\t\t* Menghitung Sisi Miring Segitiga *\n\n";
			cout << " Masukkan alas segitiga   : "; 
			cin >> a;
			cout << " Masukkan tinggi segitiga : "; 
			cin >> t;
			sm=sqrt((a*a)+(t*t));
			cout << "\n Panjang Sisi Miring Segitiga = " << sm << endl;
		break;
		
		case 2:
			cout << "\t\t\t* Menghitung Luas Segitiga *\n\n";
			cout << " Masukkan alas segitiga 	: "; 
			cin >> a;
			cout << " Masukkan tinggi segitiga 	: "; 
			cin >> t;
			luas=0.5*a*t;
			cout << "\n Luas Segitiga = " << luas << endl;
		break;
		
		case 3:
			cout << "\t\t\t* Menghitung Keliling Segitiga *\n\n";
			cout << " Masukkan alas segitiga   : "; 
			cin >> a;
			cout << " Masukkan tinggi segitiga : "; 
			cin >> t;
			keliling=a+t+sm;
			cout << "\n Keliling Segitiga = " << keliling << endl;
		break;
		
		case 4:
			exit(0);
		
		default:
			cout << " Pilihan tidak tersedia";
	}
		
	return 0;
}
