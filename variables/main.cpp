#include <iostream>
int FirstNumber = 0;
int SecondNumber = 0;
int MultiplicationResult = 0;
using namespace std;

void MultiplyNumbers() {
    cout << "Enter the first number: ";

    cin >> FirstNumber;
    cout << "Enter the second number: ";

    cin >> SecondNumber;
    MultiplicationResult = FirstNumber * SecondNumber;
    cout << FirstNumber << " * " << SecondNumber << " = " << MultiplicationResult << endl;
}
    int main() {
        cout << "From MultiplyNumbers"<<endl;
        cout << "*******************************************************************"<<endl;
        MultiplyNumbers();

        cout << "From Main" << endl;
        cout << "*******************************************************************"<<endl;
        cout << "Enter the first number: ";
        cin >> FirstNumber;
        cout << "Enter the second number: ";
        cin >> SecondNumber;
        MultiplicationResult = FirstNumber * SecondNumber;
        cout << FirstNumber << " * " << SecondNumber << " = " << MultiplicationResult << endl;
        cout << "*******************************************************************"<<endl;
        cout << endl;

        return 0;
}