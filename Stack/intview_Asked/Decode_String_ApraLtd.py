# Given an encoded string, return its decoded string.
# The encoding rule is: k[encoded_string], where the encoded_string inside the square brackets is being repeated exactly k times. Note that k is guaranteed to be a positive integer.
# You may assume that the input string is always valid; there are no extra white spaces, square brackets are well-formed, etc. Furthermore, you may assume that the original data does not contain any digits and that digits are only for those repeat numbers, k. For example, there will not be input like 3a or 2[4].
# The test cases are generated so that the length of the output will never exceed 10^5.
# Example 1:

# Input: s = "3[a]2[bc]"
# Output: "aaabcbc"
# Example 2:

# Input: s = "3[a2[c]]"
# Output: "accaccacc"
# Example 3:

# Input: s = "2[abc]3[cd]ef"
# Output: "abcabccdcdcdef"
 
# Constraints:
# 1 <= s.length <= 30
# s consists of lowercase English letters, digits, and square brackets '[]'.
# s is guaranteed to be a valid input.
# All the integers in s are in the range [1, 300].

# Testcases: 
# 3[a]2[bc]
# 2[abc]3[cd]ef
# 3[a2[c]]
# 2[a]
# 10[a]

in_str = "3[a2[c]]"
in_str = "2[abc]3[cd]ef"
stk = []
stk_num = []
str_item = []
for item in in_str:
    str_item.append(item)
    
i = 0
num = ""
out = ""
while (i<len(str_item)):
    if str_item[i] == '[':
        stk.append("")
        stk_num.append(int(num))
        num = ""
    elif str_item[i] == ']':
        exp = stk.pop()
        count = ""
        if stk_num:
            count = stk_num.pop()
        else:
            count = 1
        exp = exp * count
        if stk:
            stk[-1] = stk[-1] + exp
        else:
            out = out + exp
    elif 'a'<=str_item[i]<='z':
        if stk:
            stk[-1] = stk[-1] + str_item[i]
        else:
            out = out + str_item[i]
    else:
        num=num+str_item[i]
    i+=1

print(out)
