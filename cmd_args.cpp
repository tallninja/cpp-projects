#include <cstdlib>
#include <iostream>

using namespace std;

/**
 * main - entrypoint
 * Return: 0 if executed successfully
 */

int main(int argc, char *argv[])
{
	cout << "Number of arguments: " << argc << endl;

	for (int i = 0; i < argc; i++)
		cout << "Argumnt #" << i << ": " << argv[i] << endl;

	return (0);
}
