#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double d = b * b - 4 * a * c;
    if (d > 0) {
        double x_1 = (-b + sqrt(d)) / (2 * a);
        double x_2 = (-b - sqrt(d)) / (2 * a);
        cout << x_1 << " " << x_2; 
    } 
    else if (d == 0) {
        double x = -(b - 2 * a);
        cout << x;
    }
    else {
        cout << "Deistvitel'nih korney net";
    }
    return 0;
}