#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int n, num, ma, t = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		ma = 0;
		for (int j = 1; j <= n; j++)
		{
			cin >> num;
			if (num > ma)
			{
				ma = num;
			}
		}
		if (t == 0 && ma == n - 1)
		{
			cout << ma + 1 << " ";
			t = 1;
		}
		else
		{
			cout << ma << " ";
		}
	}
	cout << "\n";
}
