/*
Name: Leon Lau
username: nya10
Problem link: https://codeforces.com/contest/1560/problem/C
*/

# include <iostream> //Handles input, output to console
# include <fstream> //Handles input, output with files
# include <cmath> //Includes popular math functions
# include <string> //Allows use of string variable
# include <vector> //Allows use of vectors
# include <algorithm>
 
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
  int t;
  cin >> t;
  for(int m = 0; m < t; m = m + 1)
  {
    int k{};
    cin >> k;
 
    int a{1}; //The column coordinate
    int b{1}; //The row coordinate
 
    //We want to find the max coordinate of either a or b, given k
    int i{0};
    while(i*i < k){
      i = i + 1;
    }
    //cout << i << endl; //determined the max coordinate of either a or b
 
    if(k <= i*i && k > i*i - i)
    {
      b = i;
      a = i*i - k + 1;
      
    }
    else
    {
      a = i;
      b = k - (i-1)*(i-1);
    }
 
    cout << b << ' ' << a << endl;
  }
}
