#include <iostream>
#include <vector>

class TwoSum {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::vector<int> arrayOfIndexes = {0,0};
        bool flag = true;
        int size = nums.size();
        for (int i = 0; i < size - 1; i++) {
            for (int j = i+1; j < size; j++) {
                if (nums[i] + nums[j] == target) {
                    arrayOfIndexes[0] = i;
                    arrayOfIndexes[1] = j;
                    flag = false;
                    break;
                }
            }
            if (!flag) break;
        }
        return arrayOfIndexes;
    }
};

int main() {
    // Example usage
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    TwoSum obj;
    std::vector<int> result = obj.twoSum(nums, target);

    std::cout << "Indices that sum up to target: [" << result[0] << ", " << result[1] << "]\n";

    return 0;
}
