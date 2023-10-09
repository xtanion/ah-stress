S = []
M = []
L = []
X = []

n, m1, m2, m3, m4 = (int(x) for x in input().split())
# print(n, m1, m2, m3, m4)

for i in range(n):
    name, height = input().split()
    height = int(height)
    if height < m1:
        S.append(name)
    elif height >= m1 and height < m2:
        M.append(name)
    elif height >= m2 and height < m3:
        L.append(name)
    elif height >= m3 and height < m4:
        X.append(name)

print("S: ")
print(S)
print("M: ")
print(M)