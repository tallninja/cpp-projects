#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>

using namespace std;

// int g_iMyNumber = 10 // global variable using hungarian notation
// const double PI = 3.14159265 // constant variable cannot be changed
//

/**
 * main - entrypoint
 * argc - number of command line arguments
 * argv - array containing command line arguments
 */

int main(int argc, char *argv[])
{
	cout << "Char: " << sizeof(char) << endl;
	cout << "Short int: " << sizeof(short int) << endl;
	cout << "Boolean: " << sizeof(bool) << endl;
	cout << "Int: " << sizeof(int) << endl;
	cout << "Float: " << sizeof(float) << endl;
	cout << "Double: " << sizeof(double) << endl;
	cout << "Long: " << sizeof(long) << endl;
	cout << "Long Long: " << sizeof(long long) << endl;
	cout << "Long Double: " << sizeof(long double) << endl;

	bool happy = true;
	char grade = 'A';
	unsigned int u16Age = 22;
	short int weight = 91;
	auto unknown = false; // dynamically typed variable
}
