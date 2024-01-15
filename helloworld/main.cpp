#include <iostream>
//#include <cstdio>
#include <cstdlib>
using namespace std;
constexpr int isqrt() {
    int i=1;
    while (i*i < 1764) ++i;
    return i-(i*i != 1764);
}

void swap(int,int);
void swap2(int*,int*);
int main() {
    char mychar ='m';
    int myinteger = 168168;
    float myflt = 28.98;
    double mydbl = 0.123456789;
    bool mybool = true;
    cout << "\"Hello \t\t\t World!\"" << endl;
    constexpr int x = isqrt();
    cout << "integer square root " << x << std::endl;
    cout << mychar << " " << myinteger << endl;
    cout << myflt << " " << mydbl << " " << mybool << endl;
    int y = 200, z = 100;
    int sum = y + z; cout << sum << endl;
    int divi = y/z; cout << divi << endl;
    int modu = y%z ; cout << modu << endl;
    cout << ++y << endl;
    int a = 21;
    int b = 17;

    printf("main: a = %d, b = %d\n", a,b);
    swap(a,b),
    swap2(&a, &b);
    printf("from swap2: a = %d, b = %d\n", a,b);
    return EXIT_SUCCESS;
}
void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
    printf("swap: a = %d, b = %d\n", a,b);
}
void swap2(int *pa, int *pb) {
    int t = *pa;
    *pa = *pb;
    *pb = t;
}