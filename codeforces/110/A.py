n = input()
count = 0

for x in n:
    if (x == "4") or (x =="7"):
        count+=1

if (count == 4) or (count == 7):
    print("YES")

else:
    print("NO")    
    