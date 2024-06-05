import math
for _ in range(int(input())):
    n=int(input())
    nums=[int(i) for i in input().split()]
    nums.sort()
    temp=1
    for i in nums:
        temp*=i
    print('YES'  if round(2**(math.log(temp,2)/n))**n == temp else "NO")
