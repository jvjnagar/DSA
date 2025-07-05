#include <iostream>
#include <memory>
using namespace std;

struct A {
    A() { cout << "A()\n";}
    ~A() { cout << "~A()\n"; }
    virtual void fx() {cout << "A::fx()\n"; }
};

struct B : A {
    B() { cout << "B()\n";}
    ~B() { cout << "~B()\n"; }
    void fx() override {cout << "B::fx()\n"; }
};

int main() {
    auto p = shared_ptr<B>(new B());

    p->fx();
    
	{
		auto q = p; //shared_ptr<B> q = shared_ptr<B>(p);
		q->fx();
		cout << "Use count = " << q.use_count() << endl;
	}

    cout << "Use count = " << p.use_count() << endl;
}





