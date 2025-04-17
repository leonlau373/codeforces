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
        vector<long long int> alphabet;
        for(int j = 0; j < 26; j = j + 1)
        {
            long long int characters;
            cin >> characters;
            alphabet.push_back(characters);
        }

        long long int str_length = 0;
        for(int j = 0; j < 26; j = j + 1)
        {
            str_length += alphabet[j];
        }


    }
    return 0;
}
