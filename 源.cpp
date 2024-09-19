#include <iostream>
using namespace std;

bool isfind(int* a, int index, int mb)
{
	return  a[index] >= mb;
}
int find(int* a, int len, int  mb)
{
	int l = -1, r = len;

	while (l + 1 < r)
	{
		int mid = (l + r) / 2;
		if (isfind(a, mid, mb))
		{
			r = mid;
		}
		else {
			l = mid;
		}

	}
	if (r == len) r = -1;
	if (a[r] != mb) r = -1;
	return r;

}

int main()
{
	int arr[4], t;
	for (int i = 0; i < 4; i++)cin >> arr[i];
	cin >> t;
	cout << find(arr, 4, t);
	return 0;
}