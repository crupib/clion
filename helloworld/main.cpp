#include <iostream>
using namespace std;
/*constexpr int isqrt(int n) {
    int i=1;
    while (i*i<n) ++i;
    return i-(i*i!=n);
}
*/

int main() {
    char mychar ='m';
    int myinteger = 168168;
    float myflt = 28.98;
    double mydbl = 0.123456789;
    bool mybool = true;
    cout << "\"Hello \t\t\t World!\"" << endl;
    int const n = 1764;
    //constexpr int x = isqrt(n);
    //cout << "integer square root " << x << std::endl;
    cout << mychar << " " << myinteger << endl;
    cout << myflt << " " << mydbl << " " << mybool << endl;
    int x = 200, y = 100;
    int sum = x + y; cout << sum << endl;
    int divi = x/y; cout << divi << endl;
    int modu = x%y ; cout << modu << endl;
    cout << ++x << endl;
    return 0;
}
