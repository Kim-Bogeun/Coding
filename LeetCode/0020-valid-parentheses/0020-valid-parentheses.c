bool isValid(char* s) {
    char stack[100000];
    int top = -1;

    for(int i = 0; s[i] != '\0'; ++i){
        char c = s[i];

        if(c == '(' || c == '{' || c == '['){
            ++top;
            stack[top] = c;
        }
        
        else{
            if(top == -1){
                return false;
            }

            if(c == ')' && stack[top] != '(' || 
               c == '}' && stack[top] != '{' ||
               c == ']' && stack[top] != '['){
                return false;
            }

            top--;
        }
    }

    if(top == -1){
        return true;
    }

    else{
        return false;
    }
}