/*
Q.Count of Smaller Elements

Given an sorted array A of size N. Find number of elements 
which are less than or equal to given element X.

Example 1:

Input:
N = 6
A[] = {1, 2, 4, 5, 8, 10}
X = 9
Output:
5
 
Example 2:

Input:
N = 7
A[] = {1, 2, 2, 2, 5, 7, 9}
X = 2
Output:
4
 
Your Task:  
You don't need to read input or print anything. 
Your task is to complete the function countOfElements() 
which takes the array A[], its size N and an integer X as inputs and 
returns the number of elements which are less than or equal to given element.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 105
1 <= Ai <= 105
0 <= X <= 105
*/

#include<iostream>
#include<vector>
using namespace std;
int countSmallerElement(vector<int> &nums, int n, int x){

    int count = 0;
    for(int i = 0; i < n; i++){
        if(nums[i] <= x){
            count++;
        }
    }
    return count;
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
    int x;
    cin >> x;
    auto ans = countSmallerElement(nums, n, x);
    cout << ans;
    return 0;
}