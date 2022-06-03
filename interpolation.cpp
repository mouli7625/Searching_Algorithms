#include <bits/stdc++.h>
using namespace std;
int interpolationSearch(int arr[], int lo, int hi, int x)
{
	int pos;
	if (lo <= hi && x >= arr[lo] && x <= arr[hi]) {
		pos = lo
			+ (((double)(hi - lo) / (arr[hi] - arr[lo]))
				* (x - arr[lo]));
		if (arr[pos] == x)
        {
			return pos;
        }
		else if (arr[pos] < x)
        {
			return interpolationSearch(arr, pos + 1, hi, x);
        }
		else if (arr[pos] > x)
        {
			return interpolationSearch(arr, lo, pos - 1, x);
        }
        else
        {
            return -1;

        }
	}
    else
    {
        return -1;

    }
}
int main()
{
    int n,x,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>x;
	int index = interpolationSearch(arr, 0, n - 1, x);
	if (index != -1)
		cout << "Element found at index " << index;
	else
		cout << "Element not found.";

	return 0;
}
