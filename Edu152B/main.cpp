/*
Name: Leon Lau
username: nya10
Problem link: https://codeforces.com/contest/1849/problem/B
*/

# include <iostream> //Handles input, output to console
# include <fstream> //Handles input, output with files
# include <cmath> //Includes popular math functions
# include <string> //Allows use of string variable
# include <vector> //Allows use of vectors
# include <algorithm>
# include <cstdlib>
# include <iomanip> //set precision
# include <iterator>
# include <numeric>

using namespace std; //TL;DR Makes coding easier

void printarray(int arr[], int size)
{
  for (int i = 0; i < size; i = i + 1)
  {
    cout << arr[i] << ' ';
  }
}

void printvector(vector<int> arr)
{
  for (int i = 0; i < arr.size(); i = i + 1)
  {
    cout << arr[i] << " ";
  }
}

int main()
{
  int testcase;
  cin >> testcase;
  for(int m = 0; m < testcase; m = m + 1)
  {
    int n;
    int damage;

    cin >> n >> damage;

    vector<int> monsters;
    for(int i = 0; i < n; i = i + 1)
    {
        int hp;
        cin >> hp;
        monsters.push_back(hp);
    }

    vector<vector<int>> mod_monsters;
    for(int i = 0; i < n; i = i + 1)
    {
        vector<int> idx_damage;
        if(monsters[i]%damage == 0)
        {
            idx_damage.push_back(damage);
            idx_damage.push_back(i);

            mod_monsters.push_back(idx_damage);
        }
        else
        {
            idx_damage.push_back(monsters[i]%damage);
            idx_damage.push_back(i);

            mod_monsters.push_back(idx_damage);
        }
    }

    stable_sort(mod_monsters.begin(), mod_monsters.end());

    for(int i = 0; i < n; i = i + 1)
    {
        cout << mod_monsters[i][0] << ' ' << mod_monsters[i][1] << endl;
    }

    for(int i = n-1; i >= 0; i = i - 1)
    {
        cout << mod_monsters[i][1] << ' ';
    }
    cout << endl;

  }
  return 0;
}
