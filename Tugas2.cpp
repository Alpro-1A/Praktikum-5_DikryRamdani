#include <iostream>
using namespace std;

void segitiga () {
    cout << "tiggi segitiga"  << endl; //function yang akan di gunakan
};
int main(){
    int n;

    cout << "Masukkan nilai segitiga: ";

    cin >> n; //nilai segitiga yang akan keluar
    segitiga();
    cout << endl;

    for (int i = 1; i <= n; i++){
        for (int j = n; j > i; j--){ //rumus membuat segitiga dengan *
            cout << " ";
        }
        for (int k = 1; k <= i; k++){
            cout << "* ";
        }

    cout << endl;
    }

    return 0;
}
