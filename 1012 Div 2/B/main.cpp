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
        int n,m;
        cin >> n >> m;
        string balls[n];
        // n rows, m string length

        for(int j = 0; j < n; j = j + 1)
        {
            cin >> balls[j];
        }

        bool flag = true;
        for(int j = 1; j < n; j = j + 1)
        {
            for(int k = 1; k < m; k = k + 1)
            {
                if(balls[j][k] == '1')
                {
                    bool flagrow = true;
                    bool flagcol = true;
                    for(int row = 0; row < j; row++)
                    {

                        if(balls[row][k] == '0')
                        {
                            flagrow = false;
                            break;
                        }
                    }
                    for(int col = 0; col < k; col++)
                    {
                        if(balls[j][col] == '0')
                        {
                            flagcol = false;
                            break;
                        }
                    }
                    flag = flagrow || flagcol;
                }

                if(!flag)
                {
                    break;
                }


            }
            if(!flag)
            {
                break;
            }
        }

        if(flag)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }



    }
    return 0;
}
