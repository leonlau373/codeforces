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

int xor_calc(int a, int b)
{
    return (a+b)%2;
}

int main()
{
    int testcase;
    cin >> testcase;
    for(int i = 0; i < testcase ; i = i + 1)
    {
        long long int n;
        long long int l;
        long long int r;
        cin >> n >> l >> r;

        vector<int> a;
        for(int j = 0; j < n; j = j + 1)
        {
            int a_element;
            cin >> a_element;
            a.push_back(a_element);
        }
    }
    return 0;
}
