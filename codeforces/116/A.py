a = int(input())
p = 0
c = []
for i in range(a):
	a,b = map(int,input().split())
	p = p-a
	p = p+b
	c.append(p)
print(max(c))