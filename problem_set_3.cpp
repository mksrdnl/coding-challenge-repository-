#include <iostream>
#include <vector>
#include <algorithm> // For max function
using namespace std;

// Function to find the length of the longest increasing subsequence
int lengthOfLIS(const vector<int>& nums) {
    if (nums.empty()) {
        return 0; // If the array is empty, the LIS length is 0
    }

    // Create a dp array to store the length of the LIS ending at each index
    vector<int> dp(nums.size(), 1); // Initialize all values to 1 (each element is an LIS of length 1 by itself)

    int maxLength = 1; // Variable to track the maximum length of LIS

    // Build the dp array
    for (int i = 1; i < nums.size(); ++i) {
        for (int j = 0; j < i; ++j) {
            if (nums[i] > nums[j]) { // If nums[i] can extend the subsequence ending at nums[j]
                dp[i] = max(dp[i], dp[j] + 1); // Update dp[i] with the max length
            }
        }
        maxLength = max(maxLength, dp[i]); // Track the overall maximum LIS length
    }

    return maxLength; // Return the length of the longest increasing subsequence
}

int main() {
    // Example usage
    vector<int> inputNumbers = {10, 9, 2, 5, 3, 7, 101, 18};
    int result = lengthOfLIS(inputNumbers);

    // Output the result
    cout << "Length of Longest Increasing Subsequence: " << result << endl;

    return 0;
}
