# inputs
# "A or B or C and D or E"
# "A or B and C or D"
# "A"
# "A and B or C and D"

# outputs should be
# ["A-D", "B-D", "C-D", "A-E", "B-E", "C-E"]
# ["A-C", "A-D", "B-C", "B-D"]
# ["A"]
# ["A-B-D", "A-C-D"]

str1 = "A or B or C and D or E"

str1 = str1.split(" and ")
str1 = [s.split(" or ") for s in str1]
def combination(str1, s_out, k, s_final):
    if len(s_out)==len(str1):
        s_final.append("-".join(s_out))
    else:
        for i in range(len(str1[k])):
            s_out.append(str1[k][i])
            combination(str1, s_out, k+1, s_final)
            s_out.pop()
        
s_out = []
k=0
s_final = []
combination(str1, s_out, k, s_final)
print(s_final)
        
