/*
Name: Leon Lau
username: nya10
Problem link: https://codeforces.com/contest/2037/problem/B
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

bool isinvec(vector<int> v, int key)
{
    bool flag = false;
    {
        for(int i = 0; i < v.size(); i = i + 1)
        {
            if(key == v[i])
            {
                flag = true;
                break;
            }
        }

        return flag;
    }
}
int main()
{
    int testcase;
    cin >> testcase;
    for(int i = 0; i < testcase ; i = i + 1)
    {
        int k;
        cin >> k;
        int total = k - 2;

        vector<int> v;
        inputvec(v, k);

        sort(v.begin(), v.end());

        int num1 = 0;
        int num2 = 0;

        for(int j = 0; j < k; j = j + 1)
        {
            if(total%v[j] == 0 && isinvec(v, total/v[j]))
            {
                num1 = v[j];
                num2 = total/v[j];
                break;
            }
        }

        cout << num1 << ' ' << num2 << endl;
    }
    return 0;
}
