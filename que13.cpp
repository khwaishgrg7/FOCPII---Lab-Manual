//que13
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    float x1, x2, d;

    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    d = b*b - 4*a*c;

    x1 = (-b + sqrt(d)) / (2*a);
    x2 = (-b - sqrt(d)) / (2*a);

    cout << "Root 1 = " << x1 << endl;
    cout << "Root 2 = " << x2 << endl;

    return 0;
}







