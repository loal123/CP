import math

n, m,t = map(int, input().split(' '))
boys = 4
girls = 1
while boys + girls < t:
    if boys < n:
        boys += 1
    else:
        girls -= 1
counts = 0
while boys >= 4 and girls <= m:
    counts += math.comb(n,boys) * math.comb(m,girls)
    boys -= 1
    girls += 1
    
print(counts)