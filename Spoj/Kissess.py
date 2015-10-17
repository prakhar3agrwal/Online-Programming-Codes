import math
import sys
y=1000000007
t=int(raw_input())
while(t>0):
	t=t-1
	n=int(raw_input())
	if(n%2==0):
		p=n/2
		p=p-1
		x=int(math.pow(2,(p+2)))-2
		x=x+int(math.pow(2,(p+1)))
	else:
		p=n/2
		x=int(math.pow(2,(p+2)))-4
		x=x+2
	x=x%y
	print(x)