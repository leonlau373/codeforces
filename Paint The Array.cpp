/*
Name: Leon Lau
username: nya10
Problem Link: https://codeforces.com/problemset/problem/1618/C
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

long long int gcdvector(vector<long long int>arr)
{
  int size = arr.size();
  long long int result = arr[0];
  for(int i = 1; i < size; i = i + 1)
  {
    result = gcd(result, arr[i]);

    if(result == 1)
    {
      return 1;
    }
  }

  return result;
}

bool alternating(vector<long long int> arr)
{
  int size = arr.size();
  for(int i = 0; i < size - 1; i = i + 1)
  {
    if(arr[i] == arr[i + 1])
    {
      return 0;
    }
    else
    {

    }
  }
  
  return 1;
}

int main()
{
  int testcase;
  cin >> testcase;
  for(int m = 0; m < testcase; m = m + 1)
  {
    int size;
    cin >> size;
    vector<long long int> arr;
    vector<long long int> copy1;
    vector<long long int> copy2;
    for(int i = 0; i < size; i = i + 1)
    {
      long long int x;
      cin >> x;
      arr.push_back(x);
      copy1.push_back(x);
      copy2.push_back(x);
    }

    if(size >= 2)
    {
      //Divide into even and odd vector
      vector<long long int> even;
      vector<long long int> odd;

      for(int i = 1; i < size ; i = i + 2)
      {
        odd.push_back(arr[i]);
      }

      for(int i = 0; i < size; i = i + 2)
      {
        even.push_back(arr[i]);
      }

      long long int gcdeven = gcdvector(even);
      long long int gcdodd = gcdvector(odd);

      for(int i = 0; i < size; i = i + 1)
      {
        copy1[i] = copy1[i] % gcdeven;
        copy2[i] = copy2[i] % gcdodd;
      }
      
      if(alternating(copy1))
      {
        cout << gcdeven << endl;
      }
      else if(alternating(copy2))
      {
        cout << gcdodd << endl;
      }
      else
      {
        cout << 0 << endl;
      }
    } 
  }

  return 0;
}
