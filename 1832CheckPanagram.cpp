

class Solution {
public:
    bool checkIfPangram(string sentence) {
    
        unordered_set<char> set1(sentence.begin(), sentence.end());
        
        return set1.size() == 26;
    }
};