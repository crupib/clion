#include <string>
#include <iostream>
using namespace std;

int main() {
    string myString;
    cout << "Please input something and press Enter key.";
    cout << endl;
    getline(cin,myString);
    cout << "You have inputted: " << myString;
}
