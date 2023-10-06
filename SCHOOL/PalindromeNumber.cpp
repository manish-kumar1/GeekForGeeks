/*
Q.Palindrome
Given an integer, check whether it is a palindrome or not.

Example 1:

Input: n = 555
Output: Yes

Example 2:

Input: n = 123
Output: No
 
Your Task:
You don't need to read or print anything. 
Your task is to complete the function is_palindrome() which 
takes the number as input parameter and returns "Yes" 
if it is palindrome otherwise returns "No"(Without quotes).
 
Expected Time Complexity: O(x)
Expected Space Complexity: O(x) where x is number of digits in n.
 
Constraints:
1 <= n <= 1000

Company Tag
Zoho Samsung Oracle Adobe
*/

#include<iostream>
using namespace std;

string checkPalindrome(int n){
    int x = n;
    int sum = 0;
    while(n != 0){
        int rem = n % 10;
        sum = (sum*10) + rem;
        n = n / 10;
    }
    if(x == sum){
        return "Yes";
    }
    else{
        return "No";
    }
}
int main(){
    int n;
    cin >> n;

    string ans = checkPalindrome(n);
    cout << ans;

    return 0;
}