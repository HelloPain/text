#include <iostream>
using namespace std;
int hailstone(int n)
{
	int len = 1;
	while (n > 1)
	{
		n % 2 ? (n = 3 * n + 1) : (n /= 2);
		len++;
	}
	return len;
}
int main()
{
	cout << hailstone(42);
	system("pause");
	return 0;
}