def is_balanced(s: str) -> bool:
    # Dictionary to hold matching parentheses
    map_parentheses = {')': '(', '}': '{', ']': '['}
    stack = []

    for char in s:
        if char in  map_parentheses.values():
            # If the character is an opening parenthesis, push it onto the stack
          stack.append(char)
        elif char in map_parentheses.keys():
            if stack and stack[-1] == map_parentheses[char]:       #Checking for the map
                stack.pop()
            else:
                return False
    return not stack       # if paranthesis are empty,then they are balanced
        
# Example usage
if __name__ == "__main__":
    string = "{[()()]}"
    string1 = "{[}"
    if is_balanced(string):
        print("The parentheses are balanced.")
    else:
        print("The parentheses are not balanced.")
        

# Checking using the or & and operator
if is_balanced(string and string1):
    print("Balanced")
else:
    print("Not Balanced")
    
        
   