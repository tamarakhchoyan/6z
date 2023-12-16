#include <iostream>
int main()
{
	const int n = 8;
	int i;
	int a[n];
	int count = 0;
	for (i = 0; i < n; ++i)
		std::cin >> a[i];
	for (i = 0; i < n; ++i)
	{
		if (a[i] < 0)
		{
			break;
		}
		if (a[i] >= 0 && a[i] <= 20)
		{
			count++;
		}
	}
	std::cout << count;
	return 0;
}