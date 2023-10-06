
#include<iostream>
#include<vector>
using namespace std;

int ProductArray(vector<int> &nums, int n){

    int multi = 1;
    for(int i = 0; i < n; i++){
        multi = multi * nums[i];
    }
    return multi;
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
    int ans = ProductArray(nums, n);
    cout << ans;

    return 0;
}