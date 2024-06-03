#include <iostream>
#include<algorithm>
#include<iomanip>
using  namespace std;
int main()
{
	int arr[101];
	int n;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		sort(arr,arr+n);
		float sum=0;
		for (int i = 1; i < n-1; i++)
		{
			sum += arr[i];
		}
		cout << fixed << setprecision(2) <<sum / (n - 2) << endl;
	}
}