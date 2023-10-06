/*

*/
#include<iostream>
using namespace std;

pair<int, int> swapTwoNumber(int a, int b){

    // a = a + b;
    // b = a - b;
    // a = a - b;
    // return {a, b};

    // or 
    return {b, a};
}
int main(){
    int a, b;
    cin >> a >> b;

    pair<int, int> ans = swapTwoNumber(a, b);
    cout << ans.first << " " << ans.second;

    return 0;
}