/*
Name: Leon Lau
username: nya10
Problem link: https://codeforces.com/contest/1849/problem/A
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

int main()
{
  int testcase;
  cin >> testcase;
  for(int m = 0; m < testcase; m = m + 1)
  {
    int bread;
    int cheese;
    int ham;
    cin >> bread >> cheese >> ham;
    if(bread > cheese + ham)
    {
        cout << (cheese + ham)*2 + 1 << endl;
    }
    else
    {
        cout << bread*2 - 1 << endl;
    }
  }

  return 0;
}
