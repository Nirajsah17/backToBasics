// Problem statement
// You are given a number ’n’.
// Find the number of digits of ‘n’ that evenly divide ‘n’.
// Note:
// A digit evenly divides ‘n’ if it leaves no remainder when dividing ‘n’.
// Example:
// Input: ‘n’ = 336
// Output: 3
// Explanation:
// 336 is divisible by both ‘3’ and ‘6’. Since ‘3’ occurs twice it is counted two times.


// Sample Input 1:
// 35
// Sample Output 1:
// 1
// Explanation of sample output 1:
// 35 is only divisible by ‘5’, hence answer is 1.
// Sample Input 2:
// 373
// Sample Output 2:
// 0
// Explanation of sample output 2:
// There’s no digit in 373 that evenly divides it. Hence the output is 0.

// Expected Time Complexity:
// Try to solve this in O(log(n)) 
// Constraints:
// 1 <= ‘n’ <= 10^9
// Time Limit: 1 sec

#include <bits/stdc++.h>
using namespace std;

int cout_digit(int);

int main(){
    int number = 660;
    int count = cout_digit(number);
    cout<<count;
    return 0;
}

int  cout_digit(int number){
    int _number = number;
    int count = 0;
    while(number > 0){
        int digit = number % 10;
        if(digit !=0){
            if(_number % digit == 0){
                count+=1;
            }
        }
        number = number / 10;
    }
    return count;
}