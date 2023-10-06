#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &nums, int n){
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
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
    print(nums, n);

    return 0;
}