/*
Q. Smaller and Larger
Given a sorted array Arr of size N and a value X, 
find the number of array elements less than or equal to X 
and elements more than or equal to X. 

Example 1:

Input:
N = 7, X = 0
Arr[] = {1, 2, 8, 10, 11, 12, 19}
Output: 0 7
Explanation: There are no elements less or
equal to 0 and 7 elements greater or equal
to 0.

Example 2:

Input:
N = 7, X = 5
Arr[] = {1, 2, 8, 10, 11, 12, 19}
Output: 2 5
Explanation: There are 2 elements less or
equal to 5 and 5 elements greater or equal
to 5.
Your Task:
You don't need to read input or print anything. Your task is to complete the function getMoreAndLess() which takes the array of integers arr, n and x as parameters and returns an array of size 2. pair denoting the answer. The first value is number of elements less than or equal to x and the second value is number of elements more than or equal to x.

Expected Time Complexity: O(logN)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 105
0 ≤ X ≤ 106
1 ≤ Arr[i] ≤ 106
*/

#include<iostream>
using namespace std;

pair<int, int> smallerAndLarger(int arr[], int n, int x){
    int smaller = 0;
    int larger = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            larger++;
            smaller++;
        }
        else if(arr[i] > x){
            larger++;
        }
        else{
            smaller++;
        }
    }
    return {smaller, larger};
}
int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int x;
    cin >> x;
    pair<int, int> ans = smallerAndLarger(arr, n, x);
    cout << ans.first << " " << ans.second;

    return 0;
}