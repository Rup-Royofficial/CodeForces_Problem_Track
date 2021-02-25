n = int(input())

d = 0
z = 0

while d != n :
    x = input()
    if x == '++X' :
        z += 1 
    
    if x == 'X++' :
        z += 1
     

    if x == '--X' :
        z -= 1
     

    if x == 'X--' :
        z -= 1
    
    d+= 1


print(z)    