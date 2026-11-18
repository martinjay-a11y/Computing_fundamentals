#include <iostream>
#include <cmath>
using namespace std;

void roots(float a, float b, float c) {
    // check if the equation is quadratic
    if (a == 0) {
        cout << "Not a quadratic equation" << endl;
        return;
    }

    float d = b * b - 4 * a * c;

    if (d > 0) {
        float x1 = (-b + sqrt(d)) / (2 * a);
        float x2 = (-b - sqrt(d)) / (2 * a);
        cout << "Real and distinct roots" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (d == 0) {
        float x = -b / (2 * a);
        cout << "Equal roots" << endl;
        cout << "x = " << x << endl;
    }
    else {
        float real = -b / (2 * a);
        float imag = sqrt(-d) / (2 * fabs(a));
        cout << "Complex roots" << endl;
        cout << "x1 = " << real << " + " << imag << "i" << endl;
        cout << "x2 = " << real << " - " << imag << "i" << endl;
    }
}

int main() {
    float a, b, c;
    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;
    roots(a, b, c);
    return 0;
}
