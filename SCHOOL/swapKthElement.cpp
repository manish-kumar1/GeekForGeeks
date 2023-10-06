/*
Q. Swap kth Element
Given an array Arr of size N, swap the Kth element from beginning with Kth element from end.

Example 1:

Input:
N = 8, K = 3
Arr[] = {1, 2, 3, 4, 5, 6, 7, 8}
Output: 1 2 6 4 5 3 7 8
Explanation: Kth element from beginning is
3 and from end is 6.
Example 2:

Input:
N = 5, K = 2
Arr[] = {5, 3, 6, 1, 2}
Output: 5 1 6 3 2
Explanation: Kth element from beginning is
3 and from end is 1.
Your Task:
You don't need to read input or print anything. Your task is to complete the function swapKth() which takes the array of integers arr, n and k as parameters and returns void. You have to modify the array itself.

Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ K ≤ N ≤ 105
1 ≤ Arr[i] ≤ 103

Company Tag
Morgan Stanley, Rockstand
*/

#include<iostream>
#include<vector>
using namespace std;

void swapKthElement(vector<int> &nums, int n, int k){
    
    swap(nums[k-1], nums[n-k]);
}
int main(){
    int n;
    cin >> n;
    int k;
    cin >> k;
    int v = 0;
    vector<int> nums;
    for(int i = 0; i < n; i++){
        cin >> v;
        nums.push_back(v);
    }
    swapKthElement(nums, n, k);
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }

    return 0;
}