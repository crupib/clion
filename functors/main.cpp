#include <iostream>
#include <algorithm>
#include <iterator>
#include <fstream>

using namespace std;
class Display {
    ostream &os;
    public:
        Display (ostream &os) : os(os) {
        }
    void operator () (int n) {os << n << ' ';}
};
void display(int n) {cout << n << ' ';}// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.
    auto lang = "C++";
    std::cout << "Hello and welcome to " << lang << "!\n";
    int vals [] {2,3,5,7,11};
    for_each(begin(vals), end(vals), display);
    cout << std::endl;
    for_each(begin(vals), end(vals), Display{cout});
    cout << endl;
    for_each(begin(vals), end(vals), [](int n) {
        cout << n << ' ' ;
    });
    cout << endl;
    ofstream out2("out2.txt");
    for_each(begin(vals), end(vals), [&out2](int n) {
        out2 << n << ' ' ;
    });

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}