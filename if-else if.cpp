#include <iostream>
using namespace std;
int main()
{
	int a(4);
	int b(5);
	if (a > b)
	{
		cout << "a is greater than b" << endl;
	}
	else if (a < b)
	{
		cout << "a is less than b" << endl;
	}
	else if (a == b)
	{
		cout << "a is equals to b" << endl;
	}
	else
	{
		cout << "a is not greater than,not less than,not equals to b" << endl;
	}

}