

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        
        map<char, vector<string>> textList;
        textList['1'] = {};
        textList['2'] = {"a", "b", "c"};
        textList['3'] = {"d", "e", "f"};
        textList['4'] = {"g", "h", "i"};
        textList['5'] = {"j", "k", "l"};
        textList['6'] = {"m", "n", "o"};
        textList['7'] = {"p", "q", "r", "s"};
        textList['8'] = {"t", "u", "v"};
        textList['9'] = {"w", "x", "y", "z"};

        vector<string> result;
        string currentCombination;
        
        backtrack(digits, 0, currentCombination, textList, result);
        return result;
    }

private:
    void backtrack(const string& digits, int index, string& currentCombination, map<char, vector<string>>& textList, vector<string>& result) {
        if (index == digits.size()) {
            result.push_back(currentCombination);
            return;
        }

        char digit = digits[index];
        for (const string& letter : textList[digit]) {
            currentCombination += letter;
            backtrack(digits, index + 1, currentCombination, textList, result);
            currentCombination.pop_back();
        }
    }
};

