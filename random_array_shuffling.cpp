#include <bits/stdc++.h>
using namespace std;

#define   ll    long long int

const int N = 200005;
const ll mod = 1000000007;

void testcase()
{
    mt19937 rnd(time(NULL));
    vector<string> v;
    string x;
    while (cin >> x) {
        if (x == "-1") break;
        v.push_back(x);
    }
    shuffle(v.begin(), v.end(), rnd);
    for (auto x : v) {
        cout << x << " ";
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t = 1; //cin >> t;
    while (t--) {
        testcase();
    }
    return 0;
}

/**



**/
