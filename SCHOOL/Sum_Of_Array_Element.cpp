#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int sumOfArrayELement(vector<int> &nums, int n){

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + nums[i];
    }
    return sum;
    
    // or

//     int sum = accumulate(nums.begin(), nums.end(), 0);
//     return sum;
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
    int ans = sumOfArrayELement(nums, n);
    cout << ans;

    return 0;
}