/*
Given a number N. Count the number of digits in N which evenly divides N.

Note :- Evenly divides means whether N is divisible by a digit i.e. 
leaves a remainder 0 when divided.

Input:
N = 12
Output:
2
Explanation:
1, 2 both divide 12 evenly

Input:
N = 23
Output
0
Explanation:
2 and 3, none of them
divide 23 evenly

Expected Time Complexity: O(log N)
Expected Space Complexity: O(1)
Constraints:
1<=N<=105
*/

#include<iostream>
using namespace std;

int evenlyDivides(int n){
     
    int count = 0;
    int x = n;
    while(n != 0){
        int rem = n % 10;
        if(rem != 0 && x % rem == 0){
            count++;
        }
        n /= 10;
    }
    return count;
}
int main(){
    int n;
    cin >> n;

    int ans = evenlyDivides(n);
    cout << ans;

    return 0;
}