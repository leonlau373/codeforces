/*
Name: Leon Lau
username: nya10
Problem link: https://codeforces.com/contest/2037/problem/B
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
        int n;
        cin >> n;
        if(n <= 4)
        {
            cout << -1 << endl;
        }
        else
        {
            if(n%2 == 0)
            {
                if( (n-1)%3 == 0 )
                {
                    for(int i = 1; i <= n; i = i + 2)
                    {
                        cout << i << ' ';
                    }
                    cout << 6 << ' ';
                    for(int i = 2; i <= n; i = i + 2)
                    {
                        if(i == 6)
                        {
                            continue;
                        }
                        else
                        {
                            cout << i << ' ';
                        }
                    }
                }

                else if( (n-1)%3 == 1 )
                {
                    for(int i = 1; i <= n; i = i + 2)
                    {
                        cout << i << ' ';
                    }
                    cout << 2 << ' ';
                    for(int i = 2; i <= n; i = i + 2)
                    {
                        if(i == 2)
                        {
                            continue;
                        }
                        else
                        {
                            cout << i << ' ';
                        }
                    }
                }
                else if( (n-1)%3 == 2)
                {
                    for(int i = 1; i <= n; i = i + 2)
                    {
                        cout << i << ' ';
                    }
                    cout << 4 << ' ';
                    for(int i = 2; i <= n; i = i + 2)
                    {
                        if(i == 4)
                        {
                            continue;
                        }
                        else
                        {
                            cout << i << ' ';
                        }
                    }
                }

            }

            else if(n%2 == 1)
            {
                if( n%3 == 0 )
                {
                    for(int i = 1; i <= n; i = i + 2)
                    {
                        cout << i << ' ';
                    }
                    cout << 6 << ' ';
                    for(int i = 2; i <= n; i = i + 2)
                    {
                        if(i == 6)
                        {
                            continue;
                        }
                        else
                        {
                            cout << i << ' ';
                        }
                    }
                }

                else if( n%3 == 1 )
                {
                    for(int i = 1; i <= n; i = i + 2)
                    {
                        cout << i << ' ';
                    }
                    cout << 2 << ' ';
                    for(int i = 2; i <= n; i = i + 2)
                    {
                        if(i == 2)
                        {
                            continue;
                        }
                        else
                        {
                            cout << i << ' ';
                        }
                    }
                }
                else if( n%3 == 2)
                {
                    for(int i = 1; i <= n; i = i + 2)
                    {
                        cout << i << ' ';
                    }
                    cout << 4 << ' ';
                    for(int i = 2; i <= n; i = i + 2)
                    {
                        if(i == 4)
                        {
                            continue;
                        }
                        else
                        {
                            cout << i << ' ';
                        }
                    }
                }

            }
        }
    }
    return 0;
}
