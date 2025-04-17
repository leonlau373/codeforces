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
        int row;
        int column;
        cin >> row >> column;

        vector<vector<int>> arr;

        for(int i = 0; i < row; i = i + 1)
        {
            vector<int> input;
            inputvec(input, column);

            arr.push_back(input);
        }
    }
    return 0;
}
