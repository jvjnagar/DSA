# I have a list in the form of a string. It is a valid list only if it starts with '[' and ends with ']'. 
# Also the elements of the list can only contain another list of single length lower case letters 
# or lower case letters separated by ,(no space).Ex: '[a,b,c,[a,b],[b,[[a]]]' is a valid list 
# and the function should return True.


str1 = '[a,b,c,[a,b],[b,[[a]]]]'
str2 = '[a,B,c,[a,b],[b,[[a]]]'
str3 = '[a,b, [a,b],[b,[[a]]]'
str4 = '[a,B, [a,b],[b,[[a]]'
str5 = 'a,b,c,[a,b],[b,[[a]]]'

# import stack

def is_str_valid(st):
    s = []
    for it in st:
        s.append(it)
    stk = []
    if s[0] == '[' and s[-1] == ']':
        for item in s:
            if item == '[':
                stk.append(item)
            elif item == ']':
                if not stk:
                    return False
                else:
                    stk.pop()
            else:
                if not( "a" <= item <= "z" ) and not(item==","):
                    return False
    else:
        return False

    if stk:
        return False
    return True
    
print(is_str_valid(str1))
print(is_str_valid(str2))
print(is_str_valid(str3))
print(is_str_valid(str4))
print(is_str_valid(str5))
