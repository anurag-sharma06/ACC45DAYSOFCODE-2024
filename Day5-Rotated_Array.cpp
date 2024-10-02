#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        vector<int> arr(size);
        for(int i = 0; i < size; i++){
            arr[(i+k) % size] = nums[i];
        }
        for(int i = 0; i < size; i++){
            nums[i] = arr[i];
        }
    }
};

int main(){
    
    return 0;
}
