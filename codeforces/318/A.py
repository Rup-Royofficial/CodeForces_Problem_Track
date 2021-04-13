# -*- coding: utf-8 -*-
"""
Created on Tue Apr 13 13:42:41 2021

@author: ABC
"""
'''
x,y = map(int,input().split())
z = []
a = []
b = []
z.append(x)
for i in range(x):
    x-=1
    if x!=0:
        z.append(x)
        
z.sort()
for j in z:
    if j%2!=0:
        a.append(j) 
        
    else:
        b.append(j)
a.sort()
b.sort()


d = a+b
print(d[y-1])
'''
#The above program may take extreme amount of time 
#in large cases(eg : x=10**9,y=5x10**7)
#The below one is more preferable

x,y = map(int,input().split())
if x%2 == 0:
	m =x//2
else:
	m = x//2 + 1
if y<=m:
	print (int((y-1)*2+1))
else:
	print (int((y-m)*2))        