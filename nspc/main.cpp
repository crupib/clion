#include <iostream>
#include <string>
using namespace std;
int DemoConsoleOutput() {
    cout << "In demo console output." << endl;
    return 0;
}

int main() {
    int InputNumber;
    cout << "Enter a number: ";
    cin >> InputNumber;
    cout << "Enter your name: ";
    string InputName;
    cin >> InputName;
    cout << InputName << " entered " << InputNumber << endl;
    DemoConsoleOutput();
    cout << "Hello, World!" << endl;
    return 0;
}
