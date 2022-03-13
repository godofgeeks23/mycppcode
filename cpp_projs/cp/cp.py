import math
arr = ['Zero','One','Two','Three','Four','Five','Six','Seven','Eight','Nine']
def number_2_word(n):
    ans=""
    if(n==0):
        ans='Zero'
        return ans   
    elif n==1:
        ans = "One"
        return ans
    elif n==2:
        ans = "Two"
        return ans
    elif n==3:
        ans = "Three"
        return ans
    elif n==4:
        ans = "Four"
        return ans
def vowels_count(str):
    vowels=0
    for i in str:
        if(i=='a' or i=='e' or i=='i' or i=='o' or i=='u' or i=='A' or i=='E' or i=='I' or i=='O' or i=='U'):
            vowels=vowels+1
    return int(vowels)
no_of_elements = int(input())
elements = input()
emotions = input()
qty = []
for word in elements:
   if word.isdigit():
      qty.append(int(word))
elements=elements.split(" ")
emotions=emotions.split(" ")
total_score = 0
for i in range(0,no_of_elements-1):
    if emotions[i] == "Happy":
        total_score = total_score + (10 * qty[i])
    elif emotions[i] == "Sad":
        total_score = total_score + (5 * qty[i])
    elif emotions[i] == "Neutral":
        total_score = total_score + (2 * qty[i])
    elif emotions[i] == "None":
        total_score = total_score + (1 * qty[i])
vowels=0
for i in range(0,no_of_elements-1):
    v=vowels_count(elements[i])
    vowels = vowels + (v*qty[i])
final_score=0
if total_score>vowels:
    final_score = total_score/vowels
    final_score = math.floor(final_score)

else:
    final_score=vowels/total_score
    final_score = math.floor(final_score)
flag = False
if final_score > 1:
    for i in range(2, final_score):
        if final_score == 0:
            flag = True
            break
        if (final_score % i) == 0: 
            flag = True
            break
print(final_score)
if flag:
    print("No",number_2_word(int(final_score)))
else:
    print("Yes",number_2_word(int(final_score)))