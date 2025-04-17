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

int checktable(int order_table, int table[50000])
{
    for(int i = 0; i <= order_table; i = i + 1)
    {
        if(table[i] < 4)
        {
            return i;
        }
    }
    return order_table+1;
}

int main()
{
    int testcase;
    cin >> testcase;
    for(int i = 0; i < testcase ; i = i + 1)
    {
        int table[50000];
        for(int j = 0; j < 50000; j = j + 1)
        {
            table[j] = 0;
        }
        int n;
        vector<int> people;
        cin >> n;
        inputvec(people, n);

        int order_table = 0;

        //placing the first person
        table[0] = 1;
        cout << 1 << ' ' << 1 << endl;

        //placing the other
        for(int j = 1; j < n; j = j + 1)
        {
            if(people[j] == 0)
            {
                order_table += 1;
                cout << 1 << ' ' << order_table*3 + 1 << endl;
                table[order_table] += 1;
            }
            else
            {
                int seat = checktable(order_table, table);
                if(table[seat] == 0)
                {
                    cout << 1 << ' ' << seat*3 + 1 << endl;
                    order_table += 1;
                }
                else if(table[seat] == 1)
                {
                    cout << 1 << ' ' << seat*3 + 2 << endl;
                }
                else if(table[seat] == 2)
                {
                    cout << 2 << ' ' << seat*3 + 1 << endl;
                }
                else if(table[seat] == 3)
                {
                    cout << 2 << ' ' << seat*3 + 2 << endl;
                }
                table[seat] += 1;
            }
        }



    }
    return 0;
}
