class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || s.length() <= numRows) {
            return s;
        }
        
        string newString;
        int step = 2 * (numRows - 1);

        for (int row = 0; row < numRows; ++row) {
            for (int i = row; i < s.length(); i += step) {
                newString += s[i];
                int secondStepIndex = i + step - 2 * row;
                if (row != 0 && row != numRows - 1 && secondStepIndex < s.length()) {
                    newString += s[secondStepIndex];
                }
            }
        }
        
        return newString;
    }
};
