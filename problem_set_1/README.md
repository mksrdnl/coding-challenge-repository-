# Problem Set 1: Palindrome Pairs

## Problem Description
Given a list of unique words, your task is to find all pairs of distinct indices (i, j) in the list so that the concatenation of the two words, i.e., `words[i] + words[j]`, forms a palindrome.

### Example:
- **Input**: `["bat", "tab", "cat"]`
- **Output**: `[[0, 1], [1, 0]]`  
  - The palindromes are `["battab", "tabbat"]`.

### Instructions:
1. **Palindrome Checking**:
   - A palindrome is a word that reads the same backward as forward (e.g., "radar").
   - You need to check if the concatenation of two words forms a palindrome.

2. **Unique Indices**:
   - Ensure that the pairs of indices are distinct. For example, `[0, 1]` and `[1, 0]` are considered separate valid pairs.

3. **Output Format**:
   - The output should be a list of lists, where each inner list represents a pair of indices that form a palindrome.

4. **Test Your Solution**:
   - Test your solution with different inputs to ensure it handles various cases.

## Solution Overview
The approach to solving this problem involves:
1. **Iterating through each possible pair of words** in the list.
2. **Concatenating the words** in both possible orders (i.e., `words[i] + words[j]` and `words[j] + words[i]`).
3. Checking whether the resulting concatenated string is a palindrome by reversing it and comparing it to the original.
4. **Collecting the valid pairs** of indices where a palindrome is formed.
   
This approach ensures all possible palindrome pairs are found while ensuring distinct index pairs.

## Instructions to Run the Code

1. **Clone the repository**:
  git clone https://github.com/mksrdnl/coding-challenge-repository-.git
2. Navigate to the problem folder: cd problem_set_1
3. Compile/Run the code

