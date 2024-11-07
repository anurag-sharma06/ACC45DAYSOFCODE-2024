#include <iostream>
using namespace std;

void solution()
{
    int x, a, b;
    cin >> x >> a >> b;
    int total = a + 2 * b;
    if (total >= x)
    {
        cout << "QUALIFY" << endl;
    }
    else
    {
        cout << "NOTQUALIFY" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return 0;
}