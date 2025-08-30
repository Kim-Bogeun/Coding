class Solution:
    def isValid(self, s: str) -> bool:
        stack = []

        for char in s:
            if char == '(':
                stack.append('(')

            elif char == '{':
                stack.append('{')   

            elif char == '[':
                stack.append('[')    


            else:
                if len(stack):
                    return False
                
                top = stack.pop()

                if char == ')' and top != '(':
                    return False
                elif char == '}' and top != '{':
                    return False
                elif char == ']' and top != '[':
                    return False

        if len(stack) == 0:
            return True 
        else:
            return False