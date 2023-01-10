

#include <iostream>

using namespace std;


int main()
{
    float x[10], y[10];
    int n, i;
    float xx[10], xy[10], yy[10];


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

        cout <<  xy[i];
        cout << "  " << endl;

        //xx
        xx[i] = x[1] + x[2];

        cout <<  xx[i];
        cout << "  " << endl;


        //yy 
        yy[i] = y[1] + y[2];
        cout << yy[i];
        cout << "  " << endl;








    }



















    return 0;
}

;


