/* Isaac Quintanilla */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> solution;
        // walk through forloop
        for (auto x = 0; x < nums.size(); x++) {
            for (auto y = 0; y < nums.size(); y++) {
                // check to see indices dont match
                if (y == x) {
                    y++;
                }
                // check if sums of indeces equal target
                if (nums.at(x) + nums.at(y) == target) {
                    solution.push_back(x);
                    solution.push_back(y);
                    return solution;
                }
            }
        }
        return solution;
    }
};