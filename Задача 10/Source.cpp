#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int x1, x2, x3, y1, y2, y3, ab,ac, bc, p, S;
    cin>> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    ab = abs((x1 + y1) - (x2 + y2));
    ac = abs((x3 + y3) - (x1 + y1));
    bc = abs((x2 + y2) - (x3 + y3));
    p = ab + bc + ac;
    S = sqrt(p * (p - ac) * (p - bc) * (p - ab));
    cout << p << S;
    return 0;
}