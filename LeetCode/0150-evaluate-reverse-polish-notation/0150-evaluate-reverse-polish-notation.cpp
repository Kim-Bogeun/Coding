class Solution {
private:
    vector<int> stack;

public:
    int evalRPN(vector<string>& tokens) {
        for(string& token : tokens){
            if(token == "+"){
                int a = stack.back();
                stack.pop_back();
                int b = stack.back();
                stack.pop_back();
                stack.push_back(a+b);
            }

            else if(token == "-"){
                int a = stack.back();
                stack.pop_back();
                int b = stack.back();
                stack.pop_back();
                stack.push_back(b-a);
            }

            else if(token == "*"){
                int a = stack.back();
                stack.pop_back();
                int b = stack.back();
                stack.pop_back();
                stack.push_back(a*b);
            }

            else if(token == "/"){
                int a = stack.back();
                stack.pop_back();
                int b = stack.back();
                stack.pop_back();
                int c = b/a;
                stack.push_back(c);
            }

            else{
                stack.push_back(stoi(token));
            }
        }

        return stack.back();
    }
};