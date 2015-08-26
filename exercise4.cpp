#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int ang,p,q;
    while (ang!=9999) {
        cout << "masukkan angka (9999 untuk berhenti) :";
        cin >> ang;

        if (ang<q)
        {
            q=ang;
        }
    }
    cout << "nilai terkecil : " << q;
    return(0);
}
