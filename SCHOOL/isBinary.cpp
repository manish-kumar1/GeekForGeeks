/*
Q. check for Binary
Given a non-empty sequence of characters str, return true if sequence is Binary, else return false

Example 1:

Input:
str = 101
Output:
1
Explanation:
Since string contains only 0 and 1, output is 1.
Example 2:

Input:
str = 75
Output:
0
Explanation:
Since string contains digits other than 0 and 1, output is 0.
 
Your Task:
Complete the function isBinary() which takes an string str as input parameter and returns 1 if str is binary and returns 0 otherwise.

Expected Time Complexity: O(|s|)
Expected Auxiliary Space: O(1)

Constraints:
1 <=T<= 50
1 <=Length of str<= 10000
*/

#include<iostream>
using namespace std;

bool isBinary(string str){

    for(int i = 0; i < str.length(); i++){
        if(str[i] == '0' || str[i] == '1'){

        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    
    string str;
    cin >> str;

    bool ans = isBinary(str);
    cout << ans;

    return 0;
}