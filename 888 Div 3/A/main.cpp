/*
Name: Leon Lau
username: nya10
Problem link: https://codeforces.com/contest/1851/problem/A
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
        int m;
        int k;
        int H;
        cin >> n >> m >> k >> H;

        vector<int> h;
        inputvec(h , n);

        /*
        Solution idea:
        Take the difference between H and h[j] for each j.

        If the difference < (m-1)*k, then check if the difference is
        divisible by k. If it is, then h[j] can have conversation
        with H
        */

        int conversation = 0;
        for(int i = 0; i < n; i = i + 1)
        {
            int difference = abs(H - h[i]);

            if(difference <= (m-1)*k && difference % k == 0 && difference != 0)
            {
                conversation = conversation + 1;
            }
        }

        cout << conversation << endl;

    }
    return 0;
}
