t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    a.sort(reverse=True)
    # print("#"*8)
    # print(a,n)
    if n==1:
        if a[0]==1:
            print("YES")
            continue
        else:
            print("NO")
            continue
    if a[0]-a[1]>1:
        print("NO")
    else:
        print("YES")