#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int count=0;
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] <= '9' && s[i] >= '0')
			{
				count++;
			}
		}
		cout << count << endl;
	}
}
