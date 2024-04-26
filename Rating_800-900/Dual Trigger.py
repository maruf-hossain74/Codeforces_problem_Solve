for _ in range(int(input())):
  n = int(input())
  s = input()
  one = s.count('1')
  if one%2 == 1:
    print("NO")
  elif one == 2:
    f = True
    for i in range(n-1):
      if s[i]==s[i+1]=='1':
        f = False
        break
    print("YES" if f else "NO")
  else:
    print("YES")
