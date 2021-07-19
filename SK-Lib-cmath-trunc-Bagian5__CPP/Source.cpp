#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
    double x = 10.25, hasil;
    hasil = trunc(x);
    cout << "trunc(" << x << ") = " << hasil << endl;

    x = -34.251;
    hasil = trunc(x);
    cout << "trunc(" << x << ") = " << hasil << endl;

    _getch();
    return 0;
}