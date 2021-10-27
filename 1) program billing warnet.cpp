#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
	
	float nomor_komputer, jam, menit;
	int paket_internet, total_billing;
	
	cout<< "======================================================\n";
	cout<< "===================   Indra.net   ====================\n";
	cout<< "======================================================\n";
	cout<< "======================================================\n";
	cout<< endl;
	
	cout<< "Nomor Komputer		: ";
	cin>> nomor_komputer;
	cout<<"\n";
	
	cout<< "---Lama Pemakaian----";
	cout<<"\n";
	cout<< "Jam		= ";
	cin>> jam;
	cout<< "Menit		= ";
	cin>> menit;
	cout<< "\n";
	
	
	total_billing = (jam*5000.0)+(menit*5000.0/60.0);

	system ("cls");
	
	cout<< "======================================================\n";
	cout<< "===================   Indra.net   ====================\n";
	cout<< "======================================================\n";
	cout<< "======================================================\n";
	cout<< endl;
	cout<< "\n";
	
	cout<< "Komputer		: " << nomor_komputer <<endl;
	cout<< "\n";
	cout<< "Lama Penggunaan	: " << jam << "Jam " << menit << "menit" << endl;
	cout<< "\n";
	cout<< "Membayar Rp. " << total_billing;
	cout<< "\n";
	cout<< "\n";
	
	cout<< "======================================================\n";
	cout<< "===================   Indra.net   ====================\n";
	cout<< "======================================================\n";
	cout<< "============   T E R I M A   K A S I H    ============\n";
	cout<< "======================================================\n";
	cout<< "======================================================\n";
	system ("pause");
	
	return 0;
}
