#include <iostream>
using namespace std;

void angka (int n);
void angka (int no1);
void angka (int no2);
void angka (int f);

int main()
{
  cout << "Deret fibonacci" << endl;
  int n, no1 = 0, no2 = 1, f = 0; //variabel

    cout << "Masukkan jumlah deret fibonacci: ";
    cin >> n; //input angka yang akan di jadikan fibonaci

    for(int i = 1; i <= n; i++) { //deret nilai ke-1
	    if(i == 1) {
            cout << no1 << " ";
        }

        if(i == 2) { //deret nilai ke-2
            cout << no2 << " ";
        }

    	f = no1 + no2; //deret ke-3 dan selanjutnya sampai batas angka yang telah di tentukan
   	 	no1 = no2;
    	no2 = f;
    	cout << f << " ";
    }

cout << endl;
return 0;
}
