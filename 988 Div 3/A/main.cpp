/*
Name: Leon Lau
username: nya10
Problem link: https://codeforces.com/contest/2037/problem/A

Good map practice
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
        int a;
        cin >> a;
        vector<int> v;
        inputvec(v, a);

        map<int,int> mp;

        for(int j = 0; j < a; j = j + 1)
        {
            if(mp.find(v[j]) == mp.end())
            {
                mp.insert({v[j], 1});
            }
            else
            {
                mp[v[j]] = mp[v[j]] + 1;
            }
        }

        int score = 0;

        for(auto x: mp)
        {
            score = score + x.second/2;
        }

        cout << score << endl;

    }
    return 0;
}
