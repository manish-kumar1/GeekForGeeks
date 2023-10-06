/*
Q. Reverse Digits

Given N,  reverse the digits of N.
 
Example 1:

Input: 200
Output: 2
Explanation: By reversing the digts of 
number, number will change into 2.
Example 2:

Input : 122
Output: 221
Explanation: By reversing the digits of 
number, number will change into 221.
 
Your Task:
You don't need to read or print anything. Your task is to complete the function reverse_digit() which takes N as input parameter and returns the reversed number.
 
Expected Time Complexity: O(Log(N))
Expected Space Complexity: O(1)
 
Constraints:
1 <= N <= 1015

Company Tag
MAQ Software
*/

#include<iostream>
using namespace std;

long long int reverseDigits(long long int n){
    long long int sum = 0;
    while(n != 0){
        long long int rem = n % 10;
        sum = (sum*10) + rem;
        n = n / 10;
    }
    return sum;
}
int main(){
    long long int n;
    cin >> n;

    long long int ans = reverseDigits(n);
    cout << ans;

    return 0;
}