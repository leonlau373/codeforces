/*
Name: Leon Lau
username: nya10
Problem link: https://codeforces.com/contest/1851/problem/B
*/
#include <bits/stdc++.h>

using namespace std;

void printvector(vector<int>& v, int size)
{
    for (int i = 0; i < size; i = i + 1)
    {
        cout << v[i] << ' ';
    }
}

void inputvec(vector<int>& v, int size)
{
    for (int i = 0; i < size; i = i + 1)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }
}

int main()
{
    int testcase;
    cin >> testcase;
    for(int t = 0; t < testcase ; t = t + 1)
    {
        int n;
        vector<int> arr;
        cin >> n;
        inputvec(arr, n);

        vector<int> odd;
        vector<int> even;

        for(int i = 0; i < n; i = i + 1)
        {
            if(arr[i]%2 == 0)
            {
                even.push_back(i);
            }
            else
            {
                odd.push_back(i);
            }
        }

        sort(arr.begin(), arr.end());
        bool possible = true;

        int idx_odd = 0;
        int idx_even = 0;

        for(int i = 0; i < n; i = i + 1)
        {
            if(arr[i]%2 == 0)
            {
                if(i == even[idx_even])
                {
                    idx_even = idx_even + 1;
                }
                else
                {
                    possible = false;
                    break;
                }
            }
            if(arr[i]%2 == 1)
            {
                if(i == odd[idx_odd])
                {
                    idx_odd = idx_odd + 1;
                }
                else
                {
                    possible = false;
                    break;
                }
            }
        }

        if(possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }
    return 0;
}
