class Solution {
public:
    vector<int> diffWaysToCompute(const string& input) {
        vector<int> results;
        bool isNumber = true;

        for (int i = 0; i < input.size(); ++i) {
            char c = input[i];
            if (c=='+' || c=='-' || c=='*') {
                isNumber = false;


                vector<int> left  = diffWaysToCompute(input.substr(0, i));
                vector<int> right = diffWaysToCompute(input.substr(i+1));

                for (int a : left) {
                    for (int b : right) {
                        if      (c == '+') results.push_back(a + b);
                        else if (c == '-') results.push_back(a - b);
                        else               results.push_back(a * b);
                    }
                }
            }
        }

        if (isNumber) {
            results.push_back(stoi(input));
        }

        return results;
    }
};