// Example 1:
// Input: N = 123
// Output: 321
// Explanation: The reverse of 123 is 321

// Example 2:
// Input: N = 234
// Output: 432
// Explanation: The reverse of 234 is 432

#include <bits/stdc++.h>

using namespace std;

int reverse(int);

int main()
{
  int a = 234;
  int res = reverse(a);
  cout<<res;
  return 0;
}

int reverse(int number)
{
  int reversNumber = 0;
  while(number > 0){
    int digit = number % 10;
    reversNumber = reversNumber * 10 + digit;
    number = number / 10;
  }
  return reversNumber;
}