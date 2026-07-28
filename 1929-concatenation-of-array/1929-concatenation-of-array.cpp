class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int arr[2 * n];   

        for(int i = 0; i < n; i++) {
            arr[i] = nums[i];       
            arr[i + n] = nums[i];   
        }

        vector<int> ans(arr, arr + 2 * n);
        return ans;
    }
};