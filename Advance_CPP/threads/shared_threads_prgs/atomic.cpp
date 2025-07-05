//c++11

//atomic variables to avoid information loss in parallel programming.
#include <atomic>
#include <iostream>
#include <thread> 
using namespace std;

// atomic variable
atomic<int> multiThreadedSum(0);
//int multiThreadedSum;

// thread function
void sumNumbers(int increment) {
	for (int i = 0; i < increment; i++) {
		multiThreadedSum++;
	}
}


int main()
{
	int sum = 0;
	// Loop to increment 300000 times
	for (int i = 0; i < 300000; i++) {
		sum++;
	}
	printf("The sum was %d\n", sum);

	//-----------------

	// initiating threads
	thread th1(sumNumbers, 100000);
	thread th2(sumNumbers, 100000);
	thread th3(sumNumbers, 100000);

	// waiting for the threads to end.
	th1.join();
	th2.join();
	th3.join();

	printf("The multi-threaded sum was %d\n", multiThreadedSum.load());
	//printf("The multi-threaded sum was %d\n", multiThreadedSum);
}
