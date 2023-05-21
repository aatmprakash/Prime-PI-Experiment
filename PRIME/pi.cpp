#include <bits/stdc++.h>
#include <iostream>
// #include "pp.h".
using namespace std;

#define gc getchar_unlocked

#define wait std::cin.get()
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)

#define ll long long

#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)

#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

#define pb push_back
#define pf push_front
#define mp make_pair
#define F first
#define S second
#define uoM unordered_map
#define oM ordered_map

#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)

#define PI 3.1415926535897932384626
#define MOD 10e9 + 7

typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

#define ARS(b) (sizeof(b) / sizeof(b[0]))

// OR for the nerds in the front row

// template <typename T, size_t N>

// size_t ARST(T (&a)(N))
// {
//     return N;
// }

// template <typename... T>
// void re(T &...args)
// {
//     ((cin >> args), ...);
// }

// template <typename... T>
// void wr(T &&...args)
// { // rvalue reference is new to C++
//     ((cout << args << " "), ...);
//     // write(x, y, z, zz, "This is awesome right?", 4.0);
// }

// const int mod = 1'000'000'007;
//=======================
//. ===================================================

// int intToAscii(int number)
// {
//     return '0' + number;
// }
void solve()
{
    // int n = 78498;
    // // for (ll i = 0; i < 1000; i++)
    // // {
    // //     // cout << i << " = " << pi[i] << " -> " << pi[i] - i << " -> " << pi[i] - i - i << " -> " << pi[i] - i - i-i  << '\n';
    // //     cout << i << " = " << pi[i] << " -> " << pi[i] - i*i << '\n';
    // // }

    // ll maxi = 0;

    // vector<int> ansDiff;
    // int flag = 0;
    // int saveIndex = 0;
    // int savePrime = 0;
    // for (ll i = 0; i < n - 2; i++)
    // {
    //     ll diff = pi[i + 1] - pi[i];
    //     if (diff > maxi)
    //         ansDiff.push_back(diff);
    //     maxi = max(maxi, diff);

    //     if (diff == .96 && flag == 0)
    //     {
    //         flag = 1;
    //         saveIndex = i;
    //         savePrime = pi[i];
    //     }
    //     // else if (diff == 114.)
    //     // {.

    //     // saveIndex 72 = 3384
    //     // savePrime = 31397

    //     // }
    // }

    // for (int i : ansDiff)
    // {
    //     cout << i << " ";
    // }

    // cout << "\nmax num = " << maxi;
    // cout << "\nsaveIndex for 86 = " << saveIndex;
    // cout << "\nsavePrime = " << savePrime;
    ////////. to isert coma in txt file
    // vector<char> piNum;

    // for (int i = 0; i < 1000000-5; i++)
    // {
    //     char a;
    //     cin >> a;
    //     piNum.push_back(a);
    //     piNum.push_back(',');
    // }

    // for (char i : piNum)
    // {
    //     cout << i << " ";
    // }

    ////////////////. end

    // ////////////////. try to prime cnt function

    vector<ll> pn;
    ll temp0;
    for (int i = 0; i < 1000000 - 10; i++)
    {
        if (i == 0)
        {
            ll temp;
            cin >> temp;
            pn.push_back(temp);
        }
        else if (i == 1)
        {
            ll temp;
            cin >> temp;

            temp0 = temp;
        }
        else
        {
            ll temp1;
            cin >> temp1;

            ll diff = temp1 - temp0;
            for (int j = 0; j < diff; j++)
            {
                pn.push_back(temp0);
            }
            temp0 = temp1;
        }
    }
    // int temp1,temp2;
    // cin >> temp1;
    // cin. >>temp2;
    // cout << temp1 <<" - "<< temp2;
    for (ll i : pn)
    {
        cout << i << ',';
    }
    ////////////////////. end
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

#ifndef ONLINE_JUDGE
    freopen("pp2.txt", "r", stdin);
    freopen("primeCntAP.txt", "w", stdout);
#endif

    int t = 1;
    // si(t);

    while (t--)
    {
        solve();
    }

    return 0;
}
// ///////////////////////
