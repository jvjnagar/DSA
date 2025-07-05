/*
The key difference between binary and counting semaphores is that binary semaphores can only take on two values, indicating either that a resource is available or unavailable, while counting semaphores can take on multiple values, indicating the number of available resources.
*/
//c++20
//std::counting_semaphore<LeastMaxValue>
#include <iostream>
#include <semaphore>
#include <thread>
#include <vector>

std::vector<int> myVec{};

std::counting_semaphore<1> prepareSignal(0);              // (1)

void prepareWork() {

    myVec.insert(myVec.end(), {0, 1, 0, 3});
    std::cout << "Sender: Data prepared."  << '\n';
//    release :- increments the internal counter and unblocks acquirers
    prepareSignal.release();                              // (2)
}

void completeWork() {

    std::cout << "Waiter: Waiting for data." << '\n';
    //acquire decrements the internal counter or blocks until it can
    prepareSignal.acquire();                              // (3)
    myVec[2] = 2;
    std::cout << "Waiter: Complete the work." << '\n';
    for (auto i: myVec) std::cout << i << " ";
    std::cout << '\n';
    
}

int main() {

    std::cout << '\n';

    std::thread t1(prepareWork);
    std::thread t2(completeWork);

    t1.join();
    t2.join();

    std::cout << '\n';
  
}
