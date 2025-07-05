/*
 * (since C++17)
 */

#include <iostream>
#include <variant>
using namespace std;
int main()
{
    std::variant<char, int, double> s = 'a';
    std::visit([](auto x) { std::cout << x << '\n'; }, s);
    s = 123;
    std::visit([](auto x) { std::cout << x << '\n'; }, s);


    //index() allows us to know the index of the type that is active

    variant<int, string, double> var = "str";
    cout << var.index() << endl;  // 1

    var = 123;
    cout << var.index() << endl;  // 0

    var = 2.3;
    cout << var.index() << endl;

    variant<int, float> v{ 99 };

    // access by index
    cout << (get<0>(v)) << endl;  // 99

    // access by type
    cout << (get<int>(v)) << endl;  // 99

    

}
