b = int(input())
e = str(input()).split()
i = int(e[0])
j = int(e[1])
k = int(e[2])
print('S' if b <= i and b <= j and b <= k else 'N')
