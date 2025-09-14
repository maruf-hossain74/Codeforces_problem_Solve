import math
def find_factors(d):
    factors = []
    for i in range(1, int(math.sqrt(d)) + 1):
        if d % i == 0:
            factors.append(i)
            if i != d // i:
                factors.append(d // i)
    return factors

for _ in range(int(input())):
    A = list(map(int, input().split()))
    d = A[-1]
    A = A[:-1]
    A.sort()
    fact = find_factors(d)
    minDiff = d
    ans = 0
    for i in range(len(fact)):
        for j in range(i, len(fact)):
            a = fact[i]
            b = fact[j]
            if d % (a * b) == 0:
                c = d // (a * b)
                B = [a, b, c]
                B.sort()
                if A[0] >= B[0] and A[1] >= B[1] and A[2] >= B[2]:
                    ans = max(ans, (A[0] - B[0] + 1) * (A[1] - B[1] + 1) * (A[2] - B[2] + 1))
    print(ans)
