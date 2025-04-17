/*
Name: Leon Lau
username: nya10
Problem link: https://codeforces.com/contest/2071/problem/B
*/
#include <bits/stdc++.h>

using namespace std;

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i = i + 1)
    {
        cout << arr[i] << ' ';
    }
}

bool is_in_vec(vector<int> vec, int key)
{
    int n = vec.size();
    bool flag = false;

    for(int i = 0; i < n ; i = i + 1)
    {
        if(key == vec[i])
        {
            flag = true;
        }
    }
    return flag;
}

int main()
{
    int testcase;
    cin >> testcase;
    for(int i = 0; i < testcase ; i = i + 1)
    {
        vector<int> pf_sq_n = {1,8,49,288,1681,9800,57121,332928};
        int n;
        cin >> n;

        if(is_in_vec(pf_sq_n, n))
        {
            cout << -1 << endl;
        }
        else
        {
            for(int j = 1; j <= n; j = j + 1)
            {
                if(is_in_vec(pf_sq_n, j))
                {
                    cout << j + 1 << ' ' << j << ' ';
                    j = j + 1;
                }
                else
                {
                    cout << j << ' ';
                }
            }
            cout << endl;
        }
    }
    return 0;
}
