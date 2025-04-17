/*
Name: Leon Lau
username: nya10
Problem link: https://codeforces.com/contest/2071/problem/A
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

int main()
{
    int testcase;
    cin >> testcase;
    for(int i = 0; i < testcase ; i = i + 1)
    {
        int k;
        cin >> k;
        if(k%3 == 1)
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
