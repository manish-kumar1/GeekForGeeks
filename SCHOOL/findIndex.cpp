/*
Q. Find Index
Given an unsorted array Arr[] of N integers and a Key which is present in this array. You need to write a program to find the start index( index where the element is first found from left in the array ) and end index( index where the element is first found from right in the array ).If the key does not exist in the array then return -1 for both start and end index in this case.

Example 1:

Input:
N = 6
arr[] = { 1, 2, 3, 4, 5, 5 }
Key = 5
Output:  4 5
Explanation:
5 appears first time at index 4 and
appears last time at index 5.
(0 based indexing)
 
Example 2:

Input:
N=6
arr[] = { 6, 5, 4, 3, 1, 2 }
Key = 4
Output:  2 2 

Your Task:
Since, this is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function findIndex() that takes array a, integer N and integer key as parameters and returns an array of length 2 in which at first index contains the value of start index and at the second index contains the value of end index. If the key does not exist in the array then return -1 for both start and end index in this case.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ N ≤ 106
*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> findIndex(vector<int> &nums, int n, int key){
    int j = -1;
    vector<int> ans;
    for(int i = 0; i < n; i++){
        if(nums[i] == key){
            j = i;
            ans.push_back(i);
            break;
        }
    }
    if(j == -1){
        return {-1, -1};
    }
    for(int i = n-1; i >= j; i--){
        if(nums[i] == key){
            ans.push_back(i);
            break;
        }
    }
    return ans;
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
    int key;
    cin >> key;
    vector<int> p = findIndex(nums, n, key);
    for(int i = 0; i < p.size(); i++){
        cout << p[i] << " ";
    }

    return 0;
}