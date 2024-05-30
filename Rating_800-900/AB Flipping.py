for _ in range(int(input())):
    n = int(input())
    s = input()
    if len(set(s)) == 1:
        print(0)
        continue
    print(max(0, s.rfind('B') - s.find('A')))
