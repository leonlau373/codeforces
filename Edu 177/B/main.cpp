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
        long long int n;
        long long int k;
        long long int x;

        cin >> n >> k >> x;

        vector<long long int> a;
        for(int j = 0; j < n; j = j + 1)
        {
            long long int input;
            cin >> input;
            a.push_back(input);
        }

        long long int total_length = n*k;

        long long int a_total = 0;
        for(long long int j = 0; j < n; j = j + 1)
        {
            a_total = a_total + a[j];
        }

        if(a_total*k < x)
        {
            cout << 0 << endl;
        }
        else
        {
            long long int repeat = 1;
            while(repeat*a_total < x)
            {
                if(repeat*a_total >= x)
                {
                    break;
                }
                repeat = repeat + 1;
            }

            long long int point = (k - repeat)*n;


            long long int difference = x - (repeat-1)*a_total;

            long long int target = 0;
            long long int arr_point = n - 1;
            while(difference > target )
            {
                target = target + a[arr_point];
                if(target >= difference)
                {
                    break;
                }
                arr_point -= 1;

            }

            cout << point + arr_point + 1 << endl;

        }

    }
    return 0;
}
