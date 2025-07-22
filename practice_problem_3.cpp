#include <bits/stdc++.h>
using namespace std;
int main()
{

    stack<int> s1, s2;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        s1.push(val);
    }

    while (!s1.empty())
    {
        s1.push(s1.top());
        s1.pop();
    }

    return 0;
}