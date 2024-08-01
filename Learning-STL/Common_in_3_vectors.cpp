#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3)
    {
        unique(arr1);
        unique(arr2);
        unique(arr3);
        map<int, int> m;
        for (auto i : arr1)
        {
            m[i]++;
        }
        for (auto i : arr2)
        {
            m[i]++;
        }
        for (auto i : arr3)
        {
            m[i]++;
        }
        vector<int> ans;
        for (auto i : m)
        {
            if (i.second == 3)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
    void unique(vector<int> &a)
    {
        map<int, int> m;
        for (auto i : a)
        {
            m[i]++;
        }
        a.clear();
        for (auto i : m)
        {
            a.push_back(i.first);
        }
    }
};

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        vector<int> arr, brr, crr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1)
        {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2)
        {
            brr.push_back(number2);
        }
        string input3;
        getline(cin, input3);
        stringstream ss3(input3);
        int number3;
        while (ss3 >> number3)
        {
            crr.push_back(number3);
        }
        Solution ob;
        vector<int> res = ob.commonElements(arr, brr, crr);
        if (res.size() == 0)
            cout << -1;
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
}