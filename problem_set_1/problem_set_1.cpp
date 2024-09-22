#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to check if a given string is a palindrome
bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

// Function to find all palindrome pairs in the given list of words
vector<vector<int>> palindromePairs(const vector<string>& words) {
    vector<vector<int>> result;

    // Check all pairs of words
    for (int i = 0; i < words.size(); ++i) {
        for (int j = 0; j < words.size(); ++j) {
            if (i != j) {
                string combined = words[i] + words[j];
                if (isPalindrome(combined)) {
                    result.push_back({i, j});
                }
            }
        }
    }

    return result;
}

int main() {
    // Example input
    vector<string> inputWords = {"bat", "tab", "cat"};
    
    // Find palindrome pairs
    vector<vector<int>> result = palindromePairs(inputWords);

    // Output the result
    cout << "Palindrome pairs: " << endl;
    for (const auto& pair : result) {
        cout << "[" << pair[0] << ", " << pair[1] << "]" << endl;
    }

    return 0;
}
