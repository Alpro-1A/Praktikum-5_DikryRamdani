#include <iostream>

using namespace std;

void outputUser(string name){
    cout << "Jumlah Bilangan" << name << endl; //function
};

int main()
{
    int batas ,jumlahGanjil = 0 ,jumlahGenap = 0 ,jumlahPrima = 0; //variabel

    cout << "Program Bilangan Ganjil, Genap, dan Prima " << endl;

    cout << "Masukkan batas: ";
    cin >> batas;

    cout << "Bilangan Ganjil: ";
    for (int i = 0; i <= batas; i++){ //rumus mencari bilangan ganjil
        if (i % 2 != 0){
            cout << i << " ";
            jumlahGanjil += i;
        }
    }

    cout << endl;


    cout << "Bilangan Genap: ";
    for (int i = 0; i <= batas; i += 2){ //rumus mencari bilangan genap
        cout << i << " ";
        jumlahGenap += i;
    }
    cout << endl;

    cout << "Bilangan Prima: ";
    for (int i = 2; i <= batas; i++){
        int j;
        for (j = 2; j * j <= i && i % j != 0; j++){
        }
        if (j * j > i){ //rumus mencari bilangan prima
            cout << i << " ";
            jumlahPrima += i;
        }
    }
    cout << endl;

    outputUser(" Ganjil");
    outputUser(" Genap");
    outputUser(" Prima"); //cout dari function diatas

	cout<< endl;
	cout << "Faktor ganjil: ";
	for (int k = 1; k <= jumlahGanjil; k++){ //rumus faktir dari bilangan ganjil,genap,dan prima
		if (jumlahGanjil % k == 0){
			cout << k << " ";
			}
		}
	cout<< endl;

	cout << "Faktor genap: ";
	for (int l = 1; l <= jumlahGenap; l++){
		if (jumlahGenap % l == 0){
			cout << l << " ";
			}
		}
		cout<< endl;

    cout << "Faktor bilangan prima: ";
	for (int m = 1; m <= jumlahPrima; m++){
		if (jumlahPrima % m == 0){
			cout << m << " ";
			}
		}
}
