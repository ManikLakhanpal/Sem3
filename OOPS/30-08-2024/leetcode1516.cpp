#include <vector>
#include <iostream>

class Solution {
public:
    int numIdenticalPairs(std::vector<int>& nums) {
        int count = 0;
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            for (int j = i+1; j < size; j++) {
                if ( nums[i] == nums[j] ) {
                    count += 1;
                };
            }
        }

        return count;
    }
};

int main() {


    return 0;
}