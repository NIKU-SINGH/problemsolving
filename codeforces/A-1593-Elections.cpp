#include <bits/stdc++.h>

using namespace std;

int solve(int first, int second, int third)
{
	return max(0, max(second, third) + 1 - first);
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int a, b, c;
		cin >> a >> b >> c;

		cout << solve(a, b, c) << ' ' << solve(b, a, c) << ' ' << solve(c, a, b) << '\n';
	}

	return 0;
}