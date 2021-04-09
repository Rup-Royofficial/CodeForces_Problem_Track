"""
n = int(input())
x = map(int, input().split())
count = 0
for i in (x):
    if i<=i+1:
        count+=1
    if False:
        break
print(count)
"""
n = int(input())
l = list(map(int,input().split()))
cnt=1
i =0
m = 1
while i<n-1:
	if l[i]<=l[i+1]:
		cnt+=1
		if cnt>m:
			m = cnt
	else:
		cnt =1
	i+=1
print(m)        
        
        