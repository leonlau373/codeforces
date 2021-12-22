/*
Name: Leon Lau
username: nya10
Problem link: https://codeforces.com/problemset/problem/1620/D
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

int findMax (vector<int> price)
{
  int maxprice = 0;
  for(int i = 0; i < price.size(); i = i + 1)
  {
    maxprice = max(maxprice, price[i]);
  }

  return maxprice;
}

bool findNum (int div, vector<int> price)
{
  for(int i = 0; i < price.size(); i = i + 1)
  {
    if(price[i] % 3 == div)
    {
      return 1;
    }
  }
  return 0;
}

bool findInt (int number, vector<int> price)
{
  for(int i = 0; i < price.size(); i = i + 1)
  {
    if(price[i] == number)
    {
      return 1;
    }
  }
  return 0;
}

int main()
{
  int testcase;
  cin >> testcase;
  for(int m = 0; m < testcase; m = m + 1)
  {
    int chip{};

    cin >> chip;

    vector<int> price;

    for(int i = 0; i < chip; i = i + 1)
    {
      int x;
      cin >> x;
      price.push_back(x);
    }

    int maximum = findMax(price);

    bool zero = findNum(0, price);
    bool one = findNum(1, price);
    bool two = findNum(2, price);
    bool pure_one = findInt(1, price);
    bool pure_max_min_one = findInt(maximum - 1, price);
    
    if(maximum % 3 == 0)
    {
      if(!one && !two)
      {
        cout << maximum/3 << endl;
      }
      else
      {
        cout << maximum/3 + 1 << endl;
      }
    }
    else if(maximum % 3 == 1)
    {
      if(maximum == 1)
      {
        cout << 1 << endl;
      }
      else if( (pure_one || pure_max_min_one) && two)
      {
        cout << maximum/3 + 2 << endl;
      }
      else
      {
        cout << maximum/3 + 1 << endl;
      }
    }
    else
    {
      if(one)
      {
        cout << maximum/3 + 2 << endl;
      }
      else
      {
        cout << maximum/3 + 1 << endl;
      }
    }
  }

  return 0;
}
