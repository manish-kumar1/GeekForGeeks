
/*

Write a program to find the sum of the given series 1+2+3+ . . . . . .(N terms)

Input:
N = 1
Output: 1
Explanation: For n = 1, sum will be 1.

Input:
N = 5
Output: 15
Explanation: For n = 5, sum will be 15.
1 + 2 + 3 + 4 + 5 = 15.

Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 105

*/


#include<iostream>
using namespace std;

long long seriesSum(int n){

    if(n == 1){
        return 1;
    }
    long long result = 0;
    result = n*(n+1L)/2;
    return result;
}
int main(){
    int n;
    cin >> n;

    auto ans = seriesSum(n);
    cout << ans;

    return 0;
}