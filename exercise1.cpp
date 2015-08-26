#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int a=2,b=-3,c=1,bagi;
    float h1,h2,akar;
    akar=(sqrt((b*b)-(4*a*c)));
    bagi=(2*a);
    h1= (-b+akar)/bagi;
    h2= (-b-akar)/bagi;
    cout <<"h1 adalah : " << h1 << endl;
    cout <<"h2 adalah : " << h2 << endl;
    return(0);
}
