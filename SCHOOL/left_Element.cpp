/*
Q. print the left element

Given a array of length N, at each step it is reduced by 1 element. 
In the first step the maximum element would be removed, 
while in the second step minimum element of the remaining array would be removed, 
in the third step again the maximum and so on. 
Continue this till the array contains only 1 element. 
And find the final element remaining in the array.

Example 1:

Input:
N = 7
A[] = {7, 8, 3, 4, 2, 9, 5}
Ouput:
5
Explanation:
In first step '9' would be removed, in 2nd step
'2' will be removed, in third step '8' will be
removed and so on. So the last remaining
element would be '5'.  

Example 2:

Input:
N = 8
A[] = {8, 1, 2, 9, 4, 3, 7, 5}
Ouput:
4

Your Task:  
You don't need to read input or print anything. 
Your task is to complete the function leftElement() 
which takes the array A[] and its size N as inputs and 
returns the final remaining element in the array.

Expected Time Complexity: O(NLogN)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 106
1 ≤ Ai ≤ 1000

company tag
*/
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int printLeftElement(vector<int> &nums){
    
    int n = nums.size();
    sort(nums.begin(), nums.end());
    
    if(n&1){
        return nums[n/2];
    }
    else{
        return nums[(n-1)/2];
    }
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
    int ans = printLeftElement(nums);
    cout << ans;

    return 0;
}