#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
#define rfo(i,n) for(int i=n-1;i>=0;i--)
#define fo1(i,n) for(int i=1;i<=n;i++)
#define rfo1(i,n) for(int i=n;i>o;i--)
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(v) v.begin(),v.end()
#define vi vector<int> 
#define mii map<int,int>
#define mivi map<int,vector<int>>
#define int long long
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1e9

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void bubble_sort(int a[],int n)
{
    int i,j;
    fo(i,n-1)
    {
        fo(j,n-i-1)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
        }
    }
}

signed main()
{
    fast
    int n;
    cin>>n;
    int a[n];
    fo(i,n)
    {
        cin>>a[i];
    }
    bubble_sort(a,n);
    fo(i,n)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}