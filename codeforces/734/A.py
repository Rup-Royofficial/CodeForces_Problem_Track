s = int(input())
x = str(input())
y=0
z=0
for i in x:
    if i=="A":
        y+=1
    if i=="D":
        z+=1     

if y>z:
    print("Anton")

elif y==z:
    print("Friendship")    

else:
    print("Danik")        