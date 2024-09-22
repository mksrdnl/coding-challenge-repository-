#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

// Function to check if the input string has valid parentheses
bool isValid(const string& s) {
    // Stack to keep track of opening brackets
    stack<char> stk;

    // Map to match closing brackets to their corresponding opening brackets
    unordered_map<char, char> bracketMap = {
        {')', '('},
        {']', '['},
        {'}', '{'}
    };

    for (char ch : s) {
        // If it's a closing bracket
        if (bracketMap.count(ch)) {
            // Check if the top of the stack matches the corresponding opening bracket
            if (!stk.empty() && stk.top() == bracketMap[ch]) {
                stk.pop(); // Valid pair, pop the opening bracket
            } else {
                return false; // Invalid closing bracket
            }
        } else {
            // It's an opening bracket, push it onto the stack
            stk.push(ch);
        }
    }

    // If the stack is empty, all brackets were matched correctly
    return stk.empty();
}

int main() {
    // Test cases
    string input1 = "()[]{}";
    string input2 = "([)]";

    // Check validity of the input strings
    cout << "Input: " << input1 << " -> Output: " << (isValid(input1) ? "True" : "False") << endl;
    cout << "Input: " << input2 << " -> Output: " << (isValid(input2) ? "False" : "True") << endl;

    return 0;
}
