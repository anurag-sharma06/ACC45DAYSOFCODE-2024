#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int size = nums.size();
        if(size == 1){
            return true;
        }

        int farthest = 0;
        for(int i = 0; i < size; i++){
            if(i > farthest){
                return false;
            }

            farthest = max(farthest, nums[i] + i);

            if(farthest >= size - 1){
                return true;
            }
        }
        return false;
    }
};

int main(){
    
    return 0;
}