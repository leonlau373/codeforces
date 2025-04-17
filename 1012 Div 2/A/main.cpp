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
        long long int x,y,a;
        cin >> x >> y >> a;

        long long int dug_remain;
        if((a+1)%(x+y) == 0)
        {
            dug_remain = x+y;
        }
        else
        {
            dug_remain = (a + 1)%(x + y);
        }

        if(dug_remain > x)
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
