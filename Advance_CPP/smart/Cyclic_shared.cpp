

#include <iostream>
#include <memory>
using namespace std;
class A { 

public:
//	shared_ptr<A> ptr;
  weak_ptr<A> ptr;
	~A() {
		cout << "~A  "  << endl;
	}
};
int main() {
	shared_ptr<A> p1(new A());
	shared_ptr<A> p2(new A());
	p1->ptr = p2;
	p2->ptr = p1;

}
