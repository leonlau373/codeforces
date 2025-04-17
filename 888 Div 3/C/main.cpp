/*
Name: Leon Lau
username: nya10
Problem link: https://codeforces.com/contest/1851/problem/C
*/
#include <bits/stdc++.h>

using namespace std;

void printvector(vector<int>& v)
{
    for (int i = 0; i < v.size(); i = i + 1)
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
        int k;
        cin >> n >> k;
        vector<int> color;

        inputvec(color, n);

        /*
        Solution outline:
        If color[0] == color[n-1], then we create a path of length k
        that consists of color[0]. To make sure if this can be attained,
        count how many tiles that has the same color as color[0].

        If color[0] != color[n-1], then we create a path of length 2k.
        Store the c0 = color[0] position in a vector.
        Store the c1 = color[1] position in a vector.
        Then see if:
            - c0 and c1 has length more than k
            - c0[k-1] < c1[n-k]
        */
        bool possible = false;
        if(color[0] == color[n-1])
        {
            int c0_amount = 0;
            for(int i = 0 ; i < n ; i = i + 1)
            {
                if(color[i] == color[0])
                {
                    c0_amount++;
                }
            }

            if(c0_amount >= k)
            {
                possible = true;
            }
        }
        else
        {
            vector<int> c0;
            vector<int> c1;
            for(int i = 0; i < n ; i = i + 1)
            {
                if(color[i] == color[0])
                {
                    c0.push_back(i);
                }
                else if(color[i] == color[n-1])
                {
                    c1.push_back(i);
                }
            }

            if( (c0.size() >= k) && (c1.size() >= k) && (c0[k-1] < c1[c1.size()-k]) )
            {
                possible = true;
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
