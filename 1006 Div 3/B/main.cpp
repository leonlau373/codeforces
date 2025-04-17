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
        long long int n;
        string s;

        cin >> n >> s;

        map<char, long long int> char_count;
        char_count['-'] = 0;
        char_count['_'] = 0;

        for(int j = 0; j < n; j = j + 1)
        {
            char_count[s[j]] += 1;
        }

        long long int a = char_count['-'];
        long long int b = char_count['_'];

        if(a < 2)
        {
            cout << 0 << endl;
        }
        else if(a % 2 == 0)
        {
            cout << b * (a/2) * (a/2)<< endl;
        }
        else
        {
            cout << (a/2) * (a/2 + 1) * b << endl;
        }
    }
    return 0;
}
