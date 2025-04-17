/*
Name: Leon Lau
username: nya10
Problem link:
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
    for(int i = 0; i < testcase ; i = i + 1)
    {
        int n;
        int k;
        string s;

        cin >> n >> k >> s;

        bool flag = false;
        if(n > 1)
        {
            for(int j = 0; j < s.length() - 1; j = j + 1)
            {
                if(s[j] != s[j+1])
                {
                    flag = true;
                }
            }

        }

        if(k == 0 || s.length() == 1)
        {
            if(s[0] < s[s.length()-1])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            if(flag)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }

    }
    return 0;
}

