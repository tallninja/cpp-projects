#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

/**
 * main - entrypoint
 * argc: cmd arguments count
 * argv: array of cmd arguments
 * Return: 0 if executed successfully
 */

int main(int argc, char *argv[])
{
	float miles, km;
	string input;

	cout << "Enter miles: ";
	cin >> input;
	miles = stof(input);
	km = miles * 1.60934;

	printf("%.1f miles equals %.4f kilometres.\n", miles, km);

	return (0);
}
