def reverseAndOppositeCase(a_str):
    if len(a_str) == 1:
        if a_str.isupper():
            return a_str.lower()
        else:
            return a_str.upper()
    else:
        firstChar = a_str[0]
        if firstChar.isupper():
            firstChar = a_str[0].lower()
        else:
            firstChar = a_str[0].upper()
        
        new_str = reverseAndOppositeCase(a_str[1:]) + firstChar
        return new_str