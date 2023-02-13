N = int(input())
ans = 1
for i in range(N):
    ans = ans * N
    N -= 1
print(ans)