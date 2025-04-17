/*
Name: Leon Lau
username: nya10
Problem link:
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
        int n,k,p;
        cin >> n >> k >> p;

        k = abs(k);

        if(n*p < k)
        {
            cout << -1 << endl;
        }
        else if(k % p == 0)
        {
            cout << k/p << endl;
        }
        else
        {
            cout << k/p + 1 << endl;
        }
    }
    return 0;
}
