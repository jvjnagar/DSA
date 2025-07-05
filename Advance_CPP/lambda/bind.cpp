#include <iostream>
#include <functional>
 using namespace std;
void f(int n1, int n2, int n3, int n4, int n5)
{
    cout << n1 << ' ' << n2 << ' ' << n3 << ' ' << n4 << ' ' << n5 << '\n';
}
 
 
 
int main()
{
    using namespace std::placeholders;  // for _1, _2, _3...
 
    auto f1 = std::bind(f, _2, _1,1, 4,5);
   f1(11,22);
return 0;
}
