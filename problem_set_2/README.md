# Problem Set 2: Valid Parentheses

## Problem Description
Given a string containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['`, and `']'`, determine if the input string is valid.

An input string is valid if:
1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.

### Example:
- **Input**: `()[]{}`  
  **Output**: `True`
  
- **Input**: `([)]`  
  **Output**: `False`

### Instructions:
1. **Bracket Matching**:
   - Pay attention to matching different types of brackets correctly.

2. **Order of Closing**:
   - Ensure that open brackets are closed in the correct order.

3. **Output Format**:
   - The output should be a boolean (`True` or `False`) indicating whether the input string is valid or not.

4. **Test Your Solution**:
   - Test your solution with various strings to verify its correctness.

## Solution Overview
The solution works by using a stack data structure to keep track of the open brackets as they appear. When a closing bracket is encountered, it is matched with the top item in the stack:
1. **Push open brackets** onto the stack.
2. **Pop from the stack** when a closing bracket is found, and check if it matches the corresponding open bracket.
3. If the stack is empty and all brackets match correctly by the end, the string is valid. Otherwise, it is not.

The algorithm ensures correct matching and order of the brackets, resulting in a boolean output (`True` for valid, `False` for invalid).

## Instructions to Run the Code
1. **Clone the repository**:
https://github.com/mksrdnl/coding-challenge-repository-.git
2. Navigate to the problem folder: cd problem_set_1
3. Compile/Run the code

