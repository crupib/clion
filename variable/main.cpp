#include <iostream>
#include <string>
using namespace std;
int main() {
    char c ='C';
    string s = "hello";
    int i = 168168;
    float f = 28.98;
    double d = 0.0123456789;
    bool b = true;
    cout << "Hello, World!" << endl;
    cout << s << endl;
    cout << i << endl;
    cout << f << endl;
    cout << d << endl;
    cout << b << endl;
    int x = 200, y = 100;
    int sum = x+y; cout << sum << endl;
    int divi = x/y; cout << divi << endl;
    int modu = x%y; cout << modu << endl;
    cout << ++x << endl;
    x = 200;
    y = 100;
    cout <<"200 += 100 equals " << (x += y)<< endl;
    cout <<"300 -= 100 equals " << (x -= y)<< endl;
    cout <<"200 *= 100 equals " << (x *= y)<< endl;
    cout <<"20000 %= 100 equals "<< (x %= y)<< endl;
    x = 200;
    y = 100;
    bool result1 = (x > y);
    cout << result1<< endl;
    bool result2 = (x <= y);
    cout << result2<< endl;
    bool result3 = (x != y );
    cout << result3 << endl;
    x = 10; y=20; int z=30;
    sum=0;     // define sum variable sum = x + y * z;       // calculation cout << "x+y*z = "<< sum << endl;     // output return 0;
    sum = x + y * z;
    cout << "x+y*z = "<< sum << endl;
    return 0;
}
