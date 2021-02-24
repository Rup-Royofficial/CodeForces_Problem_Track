a = int(input())
count = 0


for i in range(0,a) :
    x, y, z = input().split()
    d = int(x) + int(y) + int(z)

    if(d>=2):
	    count = count + 1
        
        
print(count) 