#include <list>    // Needed to use the list class
#include <string>    // Needed for string
#include <algorithm>    // Needed for find and fill
#include <iostream>
using namespace std;

int main() {

    string s1 = "Hello World";
    list<char> phrase(s1.begin(), s1.end());

    list<char>::iterator iter;

    for (iter = phrase.begin(); iter != phrase.end(); iter++) {
        cout << *iter<<" ";
    }
    cout << endl;

    iter = find(phrase.begin(), phrase.end(), 'W');
    // So sleepy - see output
    fill(iter,phrase.end(), 'Z');

    for (iter = phrase.begin(); iter != phrase.end(); iter++) {
        cout << *iter;
    }
    cout << endl;

    return 0;

}
