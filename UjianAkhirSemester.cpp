

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int x[10], y[10];
    int n, i;
    float xx[10], xy[10];


    cout << "Masukkan jumlah data : ";
    cin >> n;

    for (i = 1; i <= n; i++) {

        cout << "Masukkan data X :";
        cin >> x[i];

        if (x[i] < 0) {
            cout << "data tidak boleh kurang dari 0" << endl;
        }

        cout << "Masukkan data Y :";
        cin >> y[i];
        if (y[i] < 0) {
            cout << "data tidak boleh kurang dari 0" << endl;
        }

        //xy
        xy[i] = x[i] + y[i];

        cout << "xy"; xy[i] << endl;
        cout << "-------" << endl;

        //xx
        xx[i] = x[1] + x{ 2 };

        cout << "xx"; xy[i] << endl;
        cout << "-------" << endl;





    }



















    return 0;
}

;


