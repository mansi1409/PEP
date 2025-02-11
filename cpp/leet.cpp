#include <iostream>
using namespace std;

/*char findTheDifference(string s, string t) {
    char result = 0;
    
    for (char c : s + t) {
        result ^= c;  // XOR all characters
    }
    
    return result;  // Convert back to character
}

int main() {
    cout << findTheDifference("abcd", "abcde") << endl; // Output: "e"
    //cout << findTheDifference("", "y") << endl; // Output: "y"
    return 0;
}*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack.size() > needle.size()) return -1;
        for (int i = 0; i < haystack.size(); ++i) {
            for (int j = 0; j < needle.size(); ++j) {
                if (haystack[i+j] != needle[j]) break;
                if (j == needle.size()-1) return i;
            }
        }
        return -1;
    }
}; 
    
