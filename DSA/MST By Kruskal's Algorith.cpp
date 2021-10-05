// ████████▄   ▄█   ▄█    █▄  ▄██   ▄      ▄████████ ███▄▄▄▄      ▄████████    ▄█    █▄
// ███   ▀███ ███  ███    ███ ███   ██▄   ███    ███ ███▀▀▀██▄   ███    ███   ███    ███
// ███    ███ ███▌ ███    ███ ███▄▄▄███   ███    ███ ███   ███   ███    █▀    ███    ███
// ███    ███ ███▌ ███    ███ ▀▀▀▀▀▀███   ███    ███ ███   ███   ███         ▄███▄▄▄▄███▄▄
// ███    ███ ███▌ ███    ███ ▄██   ███ ▀███████████ ███   ███ ▀███████████ ▀▀███▀▀▀▀███▀
// ███    ███ ███  ███    ███ ███   ███   ███    ███ ███   ███          ███   ███    ███
// ███   ▄███ ███  ███    ███ ███   ███   ███    ███ ███   ███    ▄█    ███   ███    ███
// ████████▀  █▀    ▀██████▀   ▀█████▀    ███    █▀   ▀█   █▀   ▄████████▀    ███    █▀

// #pragma GCC optimize "trapv"

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define fo(i, a, b) for (int i = a; i < b; i++)
#define foe(i, a, b) for (int i = a; i <= b; i++)
#define endl '\n'
#define ff first
#define ss second

const int MOD = 1000000007;
const int MOD1 = 998244353;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;

struct edge
{
    int a, b, w;
};

edge arr[1000005];
int par[10005];
int _rank[10005];

bool comp(edge a, edge b)
{
    if (a.w < b.w)
        return true;
    else
        return false;
}

int find(int a)
{
    if (par[a] < 0)
        return a;
    else
        return par[a] = find(par[a]);
}

void merge(int a, int b)
{
    a = find(a);
    b = find(b);

    if (_rank[b] > _rank[a])
        swap(a, b);
    par[b] = a;
    _rank[a] += _rank[b];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //#endif

    int n, m;
    cin >> n >> m;
    foe(i, 1, n)
    {
        par[i] = -1;
        _rank[i] = 1;
    }
    fo(i, 0, m)
    {
        cin >> arr[i].a >> arr[i].b >> arr[i].w;
    }

    sort(arr, arr + m, comp);

    int sum = 0;

    fo(i, 0, m)
    {
        int a = arr[i].a;
        int b = arr[i].b;

        if (find(a) != find(b))
        {
            sum += arr[i].w;
            merge(a, b);
        }
    }
    cout << sum << endl;

    return 0;
}