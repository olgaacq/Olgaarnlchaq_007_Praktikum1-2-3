#include<iostream>
using namespace std ;
 
int main() 
{
	cout << " \n\t\t * Tabel Perkalian * \n" ;
	cout << "\t\t----------------------" << endl;
   
    for (int i=1; i<=10; i++) {
        for (int j=1; j<=10; j++) {
            cout << i*j << "\t " ;
        }
            cout << endl << endl ;
    }
}
