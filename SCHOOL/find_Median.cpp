/*
Q. Find Median

Given an array arr[] of N integers, calculate the median
 
Example 1:
Input: N = 5
arr[] = 90 100 78 89 67
Output: 89
Explanation: After sorting the array 
middle element is the median 

Example 2:
Input: N = 4
arr[] = 56 67 30 79
Output: 61
Explanation: In case of even number of 
elements, average of two middle elements 
is the median.

Your Task:
You don't need to read or print anything. 
Your task is to complete the function find_median() which 
takes the array as input parameter and returns the floor value of the median.
 
Expected Time Complexity: O(n * log(n))
Expected Space Complexity: O(1)
 
Constraints:
1 <= Length of Array <= 100
1 <= Elements of Array <= 100

Company Tag
Accolite Amazon Samsung FactSet
*/
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int Median(vector<int> &nums){
    sort(nums.begin(), nums.end());
    int n = nums.size();

    if(n&1){
        return nums[n/2];
    }
    else{
        return (nums[(n/2)]+nums[(n/2)-1])/2;
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
    int ans = Median(nums);
    cout << ans;

    return 0;
}