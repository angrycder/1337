def _181340_pa1(arr,sel):
    n = len(arr)
    tmp=[]
    for i in range(n):
        tmp.append((arr[i],i+1))
    tmp.sort(key= lambda x:x[0])
    total_rank=n*(n+1)//2
    cf=[]
    for i,x in enumerate(tmp):
        if i!=0:
            cf.append((round(
                ((i+1)/total_rank)+cf[i-1][0],10),
                x[1]
                ))
        else:
            cf.append((((i+1)/total_rank),x[1]))
    ret=[]
    for v in sel:
        for i in range(len(cf)):
            if cf[i][0]>v:
                ret.append(cf[i][1])
                break
    return ret
print(_181340_pa1([0.4,0.05,0.3,0.2],[0.1,0.3,0.99]))
print(_181340_pa1([0.3,0.2,0.5],[0.4,0.9]))