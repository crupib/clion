#include <iostream>
#include <string>
using namespace std;
int myFunction(int arg) {
    return ++arg;
}
int function1(int num) {
    return (num * 50);
}
void function2(int num){
    cout << "The result is " << function1(num);
}
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
    if (x > y) {
      cout << "x is greater than y." << endl;
    }
    else {
        cout << "y is greater than x." << endl;
    }
    int number = 20;
    switch(number) {
        case 10: cout <<"Running case 10\n"; break;
        case 20: cout <<"Running case 20\n"; break;
        case 30: cout <<"Running case 30\n"; break;
        default: cout <<"Running case default\n"; break;
    }
    for (x = 0; x <=5; x++){
        cout << x;
    }
    cout << endl;
    int counter = 0;
    while (counter < 8) {
        cout <<"&";
        counter++;
    }
    cout << endl;
    counter = 0;
    do {
        cout << "@";
        counter++;
    } while (counter < 8);
    cout << endl;
    int num = 0;
    while (num < 10) {
        if (num == 5) break;
        num++;
    }
    num = 0;
    while (num < 10) {
        num++;
        if (num == 5) continue;
        if (num == 10) continue;
        cout << " " <<num;
    }

    cout << endl;

    bool xx = false; bool yy = true;
//    Testing c++ comment
    if (xx) {
        cout << xx << endl;
    }
    if (yy) {
        cout << yy << endl;
    }
    x = 100;
    y = 200;
    string result = (x<y)? "apple" : "banana";
    cout << result << endl;
    sum=0;
    for (int n=1;n<=100;n++)
        sum +=n;
    cout << "Sum = "<<sum << endl;
    string color[3];
    color[0] = "Red ";
    color[1] = "Yellow ";
    color[2] = "Green ";
    cout << color[0] << color[1] << color[2] << endl;
    int arr[] = { 1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "The size of the array is: " << size << endl;
    int value = arr[2];
    cout << value << endl;
    int num_array[5] = {10,20,30,40,50};
    num_array[3] = 800;
    cout << num_array[3] << endl;
    cout << "The number is "<< myFunction(10) << endl;
    int number_2 = 2;
    function2(number_2);
    return 0;
}
