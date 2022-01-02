/*
Name: Leon Lau
username: nya10
Problem link: https://codeforces.com/contest/1592/problem/A
*/

#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
bool compare (int i, int j)
{
  return i > j;
}
 
int main()
{
  int testcase{};
  cin >> testcase;
 
  for(int t = 0 ; t < testcase ; t = t + 1)
  {
    long long int weapon{};
    long long int health{};
 
    cin >> weapon;
    cin >> health;
 
    vector<long long int> weaponDamage{};
    
    for(int i = 0; i < weapon; i = i + 1)
    {
      long long int damage{};
      cin >> damage;
 
      weaponDamage.push_back(damage);
    }
 
    sort(weaponDamage.begin(), weaponDamage.end() , compare);
 
    long long int topDamage = weaponDamage[0];
    long long int secondDamage = weaponDamage[1];
 
    long long int iterate = health / (topDamage + secondDamage);
 
    if(health % (topDamage + secondDamage) <= topDamage && health % (topDamage + secondDamage) != 0)
    {
      cout << iterate*2 + 1 << '\n';
    }
    else if (health % (topDamage + secondDamage) == 0)
    {
      cout << iterate*2 <<'\n';
    }
    else
    {
      cout << iterate*2 + 2 << '\n';
    }
    
  }
 
  return 0;
}
