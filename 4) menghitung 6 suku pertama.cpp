#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {
    int i,kuadrat,jumlah_bilangan,jumlah_kuadrat;
    float akar,jumlah_akar;
	cout << "\n";
    cout <<"\t\t\t JUMLAH 6 SUKU PERTAMA \n";
    cout <<"\t\t\t----------------------- \n";
    
    jumlah_bilangan=0;
    jumlah_kuadrat=0;
    jumlah_akar=0;
    for (i=1;i<=6;i++) {
    kuadrat=i*i*i;
    akar = sqrt(i);
    jumlah_bilangan=i;
    jumlah_kuadrat=jumlah_kuadrat+kuadrat;
    
	//jumlah_akar = jumlah_akar+akar;
    cout << " Suku ke-" << i <<" = "<<kuadrat<<" "<<endl;
    }
    cout <<"---------------------- \n";
    cout <<  " Jumlah suku ke-"<< jumlah_bilangan <<" = "<<jumlah_kuadrat;
    cout<<" "<<endl;
     
    return 0;    
}
