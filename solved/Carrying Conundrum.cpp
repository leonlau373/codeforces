/*
Name: Leon Lau
username: nya10
Problem link: https://codeforces.com/contest/1567/problem/C
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
 
void printarray(long long int arr[], long long int size)
{
  for (int i = 0; i < size; i = i + 1)
  {
    cout << arr[i] << ' ';
  }
}
 
int main()
{
  int t;
  cin >> t;
  for(int m = 0; m < t; m = m + 1)
  {
    string number{};
    cin >> number;
 
    long long int arrNum[10]{};
    for(int i = 0; i < number.length(); i = i + 1)
    {
      arrNum[9 - i] = static_cast<int>(number[number.length() - i - 1] - '0');
    } //Work as intended
 
    /*
    Now we plan to use an array to define odd and even digit place to count , the answer should be (odd + 1)(even + 1) - 2.
    The -2 is used to exclude the pair where a or b is 0.
    */
 
    long long int odd = arrNum[0]*10000 + arrNum[2]*1000 + arrNum[4]*100 + arrNum[6]*10 + arrNum[8];
    long long int even = arrNum[1]*10000 + arrNum[3]*1000 + arrNum[5]*100 + arrNum[7]*10 + arrNum[9];
 
    cout << (odd + 1)*(even + 1) - 2 << '\n';
  }
 
  
 
  return 0;
}
