import math
t=int(raw_input())
m=1298074214633706835075030044377087
while(t>0):
	t=t-1
	n=int(raw_input())
	p=int(math.pow(2,(n+1)))
	p=(p-1)%m
	print(p)