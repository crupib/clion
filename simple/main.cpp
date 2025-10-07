#include <iostream>

#include <iostream>
int age{24};
int main() {
    int rate;
    int age{10};
    std::cout << "How would you rate this book so far? Please rate from 1 - 10" << std::endl;
    std::cin >> rate;
    std::cout << "You rated this book as " << rate << ", thanks for the feedback!" << std::endl;
    int numOfApples {10};
    char favoriteLetter{'J'};
    float pi {3.14159};
    double distanceToMoon{238855.947};
    bool isSunShining {true};

    std::cout <<"I have "<< numOfApples<< " apples."<< std::endl;
    std::cout <<"My favorite letter is "<<  favoriteLetter << "."<< std::endl;
    std::cout <<"The value of pi is approximately "<<  pi << "."<< std::endl;
    std::cout <<"The distance to the moon is "<<  distanceToMoon << " miles."<< std::endl;
    std::cout <<"Is the sun shining? "  << (isSunShining ? "yes" : "no") << std::endl;

    unsigned int num_customers{ 5000 };
    short num_items_sold{ 100 };
    unsigned short num_days_open{ 7 };
    long total_profit{ 10000000 };
    long long total_revenue{ 100000000000 };
    long double average_rating{ 4.5 };
    std::cout << "There are " << num_customers << " customers who bought " << num_items_sold
        << " items over " << num_days_open << " days." << std::endl;
    std::cout << "The store has made a total profit of $" << total_profit << " and generated $"
        << total_revenue << " in total revenue." << std::endl;
    std::cout << "The average customer rating is " << average_rating << " stars." << std::endl;
    unsigned int i{};
    i = -16;
    std::cout << "I comes out as positive " << i << std::endl;
    char letter1{'z'};
    char letter2{'Z'};
    std::cout << "The ASCII value of "<<letter1 <<" is " << int(letter1) << std::endl;
    std::cout << "The ASCII value of " <<letter2 <<" is " << int(letter2) << std::endl;
    auto myNum = 42;
    auto myFloat = 3.14159;
    auto myChar = 'a';
    std::cout << "myNum is of type " << typeid(myNum).name() << " and has value " << myNum << std::endl;
    std::cout << "myFloat is of type " << typeid(myFloat).name() << " and has value " << myFloat << std::endl;
    std::cout << "myChar is of type " << typeid(myChar).name() << " and has value " << myChar << std::endl;
    int score1{}; // score is zero
    bool b{}; // b is false
    double d{}; // d is zero
    int* n_ptr{}; // n_ptr is nullptr”
    std::cout << score1 << " " << b << " " << d << " " << n_ptr << " "<<std::endl;
    myNum = 250;
    int f{myNum};
    std::cout << "The result is: "<< f << " " << std::endl;
    f = f * 2.0;
    std::cout << f << std::endl;
    std::cout << age << std::endl;
    std::cout << ::age << std::endl;
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}