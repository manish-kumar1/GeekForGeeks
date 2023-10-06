/*
Q. Mean
Given the marks of N students in an Array A, calculate the mean.
Note: If result is a Decimal Value, find it's floor Value.

Example 1:

Input:
N = 4 
A = { 56 , 67 , 30 , 79 }
Output:
58
Explanation:
56+67+30+79 = 232;  232/4 = 58.
So, the Output is 58.
Example 2:

Input:
N = 4 
A = { 78 , 89 , 67 , 76 }
Output:
77
Explanation:
78+89+67+76  = 310;  310/4 = 77.5 = 77.
So, the Output is 77.
Your Task:
You don't need to read input or print anything. Your task is to complete the function mean() which takes 1 Integer N and an Array A as input and returns the answer.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 104
1 <= A[i] <= 104
*/

#include<iostream>
#include<vector>
using namespace std;
int mean(vector<int> &nums, int n){
    int mean = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + nums[i];
    }
    mean = sum / n;
    return mean;
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
    int ans = mean(nums, n);
    cout << ans;

    return 0;
}