/********************
* Author:Saibuu V.M *
* Date: 29.09.2025  *
* Option 15         *
********************/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std; // namespace to avoid noise std::

int main() {
    // variable declaration only
    double a, b, t;
    double B, Bt, Bt2;
    double v1, l1, v2, l2;
    double at; // для atan(Bt)
    // source data
    a = 6,15;
    b = 1e-4;
    t = 18,5;

    // only calculations
    B = sqrt(a * b);
    Bt = B * t;
    Bt2 = Bt * Bt;
    v1 = a * t * (1 - Bt2 / 3); // rough calculations
    l1 = (a * t * t / 2) * (1 - Bt2 / 6);
    at = atan(Bt); // accurate calculations
    v2 = sqrt(a / b) * at;
    l2 = (1 / b) * (Bt * at - 0.5 * log(1 + Bt2));

    // 1 cout is used
    cout << fixed << setprecision(4)
         << "V1 = " << v1 << "\n"
         << "V2 = " << v2 << "\n"
         << "L1 = " << l1 << "\n"
         << "L2 = " << l2 << "\n";

    return 0;
}
