#include <iostream>
using namespace std;

int i, k;
int arr[10000];

int main()
{
	cin >> k;

	for (i = 0; i < k; i++)
		cin >> arr[i];

	for (i = k - 1; i >= 0; i--)
		cout << arr[i] << ' ';

	return 0;
}
