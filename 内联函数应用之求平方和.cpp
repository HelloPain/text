#include <iostream>
#include <string.h>
using namespace std;
inline int square(int x)
{
	return x*x;
}
int main()
{
	int i,sum=0;
	for (i = 0; i < 10; i++)
	{
		sum += square(i);
	}
	cout << sum << endl;
	system("pause");
	return 0;
}