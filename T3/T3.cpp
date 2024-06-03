#include<iostream>
using namespace std;
int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		int have = n;
		int count = 2;
		while (have >= m)
		{
			int sum = 0;
			for (int i = 0; i < m; i++)
			{
				sum += count;
				count += 2;
			}
			have -= m;
			cout << sum / m;
			if (have != 0)cout << " ";
		}
		if (have != 0)
		{
			int sum = 0;
			for (int i = 0; i < have; i++)
			{
				sum += count;
				count += 2;
			}
			cout << sum / (have);
		}
	}
}
