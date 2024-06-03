#include<iostream>
using namespace std;
int main()
{
	int m;
	while (cin >> m)
	{
		int way=0;
		for (int i = 0; i <= m / 50; i++)
		{
			for (int j = 0; j <= m / 25; j++)
			{
				for (int k = 0; k <= m / 10; k++)
				{
					for (int l = 0; l <= m / 5; l++)
					{
						for (int n = 0; n <= m; n++)
						{
							if (m == i * 50 + j * 25 + k * 10 + l * 5 + n * 1)
							{
								way++;
								break;
							}
						}
					}
				}
			}
		}
		if (m == 0)way = 0;
		cout << way << endl;
	}
}
