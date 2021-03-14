a = str(input())
b=0
c = len(a)


for i in a:
	if(i.isupper()):
		b += 1

d = c-b

if d>=b:
	a = a.lower()
	print(a)
		

if d<b:
	a = a.upper()
	print(a)