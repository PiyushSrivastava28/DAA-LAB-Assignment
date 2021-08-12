#include <bits/stdc++.h>
using namespace std;
string find_duplicates(vector<int> arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] == arr[i + 1])
            return "YES";
    }
    return "NO";
}
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
            cin >> vec[i];
        sort(vec.begin(), vec.end());
        cout << find_duplicates(vec) << endl;
    }

    return 0;
}