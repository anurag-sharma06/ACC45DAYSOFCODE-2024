#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size() - 1;
        int loop = digits.size();

        digits[size] = digits[size] + 1;

        while(size >= 0){
            if(digits[size] >= 10){
                digits[size] = 0;
                if(size != 0){
                    digits[size - 1] = digits[size - 1] + 1;
                }
                else{
                    vector<int> digits2;
                    for(int i = 0; i <= loop; i++){
                        if(i == 0){
                            digits2.push_back(1);
                        }
                        else{
                            digits2.push_back(0);
                        }
                    }
                    return digits2;
                }
            }
            size--;
        }
        return digits; 
    }
};

int main(){
    
    return 0;
}