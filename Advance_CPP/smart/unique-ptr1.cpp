#include <iostream>
#include <memory>
#include<cassert>
using namespace std;

struct A {
    A() { cout << "A()\n"; }
    ~A() { cout << "~A()\n"; }
    virtual void fx() { cout << "A::fx()\n"; }
};

struct B : A {
    B() { cout << "B()\n"; }
    ~B() { cout << "~B()\n"; }
    void fx() override { cout << "B::fx()\n"; }
};

int main() {
    try{
        //B *b = new B();
        unique_ptr<B> p(new B());
        unique_ptr<B> p1(nullptr);
        //p1 = p;
        //p1 = std::move(p);
       // cout << p << "   " << p1 << endl;
        if (nullptr != p1)
            p1->fx();
    }
    catch (exception& ee)
    {
        cout << ee.what();
    }
}
