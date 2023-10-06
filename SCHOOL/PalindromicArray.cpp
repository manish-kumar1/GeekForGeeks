/*
Q.Palindromic Array

Given a Integer array A[] of n elements. Your task is to complete the function PalinArray. 
Which will return 1 if all the elements of the Array are palindrome otherwise it will return 0.

Example 1:

Input:
5
111 222 333 444 555

Output:
1
Explanation:
A[0] = 111 //which is a palindrome number.
A[1] = 222 //which is a palindrome number.
A[2] = 333 //which is a palindrome number.
A[3] = 444 //which is a palindrome number.
A[4] = 555 //which is a palindrome number.
As all numbers are palindrome so This will return 1.
Example 2:

Input:
3
121 131 20 
Output:
0
Explanation:
20 is not a palindrome hence the output is 0.

Constraints:
1 <=T<= 50
1 <=n<= 20
1 <=A[]<= 10000
*/

#include<iostream>
#include<vector>
using namespace std;

bool isPalindrome(int n){
    int sum = 0;
    int x = n;

    while(n != 0){
        int rem = n % 10;
        sum = (sum*10) + rem;
        n = n / 10;
    }
    if(sum == x){
        return true;
    }
    else{
        return false;
    }
}
int PalindromicArray(vector<int> &nums, int n){

    int ans = 0;
    for(int i = 0; i < n; i++){
        int ans = isPalindrome(nums[i]);
        if(ans == false){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;

    int v = 0;
    vector<int> nums;
    for(int i = 0; i < n; i++){
        cin >> v;
        nums.push_back(v);
    }
    int result = PalindromicArray(nums, n);
    cout << result << endl;

    return 0;
}