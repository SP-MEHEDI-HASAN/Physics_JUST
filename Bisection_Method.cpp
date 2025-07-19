#include <bits/stdc++.h>
#define ll long long
#define dd double
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
using namespace std;
/*function : x ^ 2 - 3*/
auto f(dd tst)
{
    return tst * tst - 3;
}
void bisection(dd a, dd b, dd tol)
{
    if (f(a) * f(b) > 0)
    {
        cout << "This interval is invalid.\n";
        return;
    }
    dd c;
    while (b - a >= tol)
    {
        c = (a + b) / 2;
        if (fabs(f(c)) <= tol)
        {
            break;
        }
        else if (f(c) * f(a) < 0)
        {
            b = c;
        }
        else
            a = c;
    }
    cout << "The root for the interval a and b is :" << c << "\n";
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    cout << "Test case :";
    // int t;
    tc
    {
        cout << "Give the interval : ";
        dd a, b;
        cin >> a >> b;
        cout << "Enter the tolerence : ";
        dd tol;
        cin >> tol;
        bisection(a, b, tol);
    }
    return 0;
}