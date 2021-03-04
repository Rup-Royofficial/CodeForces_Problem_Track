a,b  = map(int,input().split())
count = 0
for i in range(a<=b) :
    a = 3*a
    b = 2*b
    count += 1
    while  a<=b:
        a = 3*a
        b = 2*b 
        count += 1
      
    print(count)
    
    