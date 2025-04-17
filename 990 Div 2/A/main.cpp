/*
Name: Leon Lau
username: nya10
Problem link:
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

  for(int i = 0; i < testcase ; i = i + 1)
  {
      int days;
      int puzzle = 0;
      int total = 0;
      int happy = 0;
      cin >> days;
      for(int j = 0; j < days; j = j + 1)
      {
          cin >> puzzle;
          total = total + puzzle;

          int n = 1;
          while (n*n <= total)
          {
              if(n*n == total)
              {
                  happy = happy + 1;
              }
              n = n + 2;
          }
      }

      cout << happy << endl;
  }

  return 0;
}
