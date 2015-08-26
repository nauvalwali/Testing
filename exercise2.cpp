#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int i=1,n,p;
    float hasil;
    cout << "masukkan angka: ";
    cin >> n;
    cout << "masukkan pangkat: ";
    cin >> p;

    hasil=1;
    while (i<=p)
    {
        hasil=hasil*n;
        i++;
    }
    cout << "pangkat dari " << n << "adalah : " << hasil;
    return(0);
}
