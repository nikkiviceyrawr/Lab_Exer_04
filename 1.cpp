#include <iostream>
using namespace std;

int main()
{
	int x = 25;
	
	int *ptr = &x;
	
	cout << *ptr << endl;
	*ptr = 25;
	cout << *ptr << endl;

	
	return 0;
}
