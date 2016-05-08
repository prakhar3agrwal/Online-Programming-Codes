import sys
height = list()
rate = list()
def isPossible(target):
	sum=0
	for i in range(N):
		x = height[i] + target*rate[i]
		if(x >= L):
			sum = sum + x
	if(sum >= W):
		return True
	return False

N,W,L=map(int,sys.stdin.readline().split())
N=int(N)
W=int(W)
L=int(L)
for i in range(N):
    x,y=map(int,sys.stdin.readline().split())
    x=int(x)
    y=int(y)
    height.append(x)
    rate.append(y)

low = 0
high = 1000000000000000000
while(low <= high):
	mid = (low + (high-low)/2)
	#print mid
	if(isPossible(mid)==True):
		ans = mid
		high = mid-1
	else:
		low = mid+1

print(ans)