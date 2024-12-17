#自己寫的

def main(n):
    p=[]
    return re(n,p)
def re(n,p):
    i=len(p)
    if i==n:
        print(p)
    for i in range(n):
        if not i in p : #0,2,1
            p.append(i)
            re(n,p) #0,1,2
            p.pop() # 0,1 back->10

main(3)