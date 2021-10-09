#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (int i = 0; i < n; i++)
#define rfo(i, n) for (int i = n - 1; i >= 0; i--)
#define fo1(i, n) for (int i = 1; i <= n; i++)
#define rfo1(i, n) for (int i = n; i > o; i--)
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define mii map<int, int>
#define mivi map<int, vector<int>>
#define int long long
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1e9

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1];
    int b[n2];

    fo(i, n1)
    {
        a[i] = arr[l + i];
    }

    fo(i, n2)
    {
        b[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }

    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }

    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
    return;
}

signed main()
{
    fast int n;
    cin >> n;
    int a[n];
    fo(i, n)
    {
        cin >> a[i];
    }
    mergeSort(a, 0, n - 1);
    fo(i, n)
    {
        cout << a[i] << " ";
    }

    return 0;
}