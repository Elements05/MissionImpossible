#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int x, c, y;
        cin >> c >> x >> y;
        cout << "\n"
             << (c - x) * y;
    }
    return 0;
}
