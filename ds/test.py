
from __future__ import unicode_literals
from datetime import datetime
import sys
sys.stdin.reconfigure(encoding='utf-8')
def main(lines):
    val=[]
    for i, v in enumerate(lines):
        tmp=i.split()
        t=datetime.strptime(tmp[0],"%H:%M:%S.%f")
        d=float(tmp[1])
        val.append((t,d))
    if val==[]:
        print(0)
    else:
        t,d=val[0]
        ret=410
        total_d=d
        for i in range(1,len(val)):
            nt,nd=val[i]
            delta=(nt-t).total_seconds()
            nv= (nd-d)*3600/delta
            if nv<10:
                ret+= delta*80/90
            total_d=nd
        ret+=((total_d-1.052)/237)*80
        print(ret)

if __name__ == '__main__':
    lines = []
    for l in sys.stdin:
        lines.append(l.rstrip('\r\n'))
    try:
        main(lines)
    except Exception as e:
        print(e)
