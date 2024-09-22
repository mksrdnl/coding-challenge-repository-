# Problem Set 3: Longest Increasing Subsequence

## Problem Description
The "Longest Increasing Subsequence" problem requires finding the length of the longest subsequence in a given array of integers, where the elements are sorted in increasing order.

- **Subsequence**: A sequence of elements that appear in the same order as they are in the original sequence, but not necessarily consecutively.
- **Increasing Subsequence**: A subsequence where elements are in strictly increasing order.

### Example:
- **Input**: `[10, 9, 2, 5, 3, 7, 101, 18]`
- **Output**: `4`

One possible increasing subsequence is `[2, 5, 7, 18]`, which has a length of 4. The goal is to find the longest such subsequence.

### Instructions:
1. **Dynamic Programming**:
   - Use dynamic programming to efficiently find the length of the longest increasing subsequence.

2. **Efficient Algorithm**:
   - The algorithm should work in an efficient manner, often utilizing a time complexity of `O(n^2)` or `O(n log n)`.

3. **Output Format**:
   - The output should be a single integer representing the length of the longest increasing subsequence.

4. **Test Your Solution**:
   - Test your solution with various unsorted arrays of integers to verify its correctness.

## Solution Overview
The solution uses dynamic programming to solve this problem:
1. **Dynamic Programming Approach**:
   - We maintain a `dp` array where each element `dp[i]` represents the length of the longest increasing subsequence ending at index `i`.
   - For each element, we check previous elements to see if the subsequence can be extended.
   - The result is the maximum value in the `dp` array, which represents the length of the longest increasing subsequence.

2. **Optimized Approach (Optional)**:
   - An optimized approach with `O(n log n)` complexity uses binary search to maintain a dynamic array of the smallest possible values for increasing subsequences of different lengths.

## Instructions to Run the Code
1. **Clone the repository**:
https://github.com/mksrdnl/coding-challenge-repository-.git
2. 
