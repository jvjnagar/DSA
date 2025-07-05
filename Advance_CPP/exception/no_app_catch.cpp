#include <iostream>
#include<string>
using namespace std;
/*
If an exception is thrown for which there is no applicable catch statement, an abnormal program termination occurs.
Throwing an unhandled exception causes the standard library function terminate( ) to be invoked.
By default, terminate( ) calls abort( ) to stop your program.
*/

int main()
{
	
	try{
throw 1;
	}
	catch(char c){}

return 0;
}

