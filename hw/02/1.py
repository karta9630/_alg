def main(n):
    p=[]
    return re(n,p)
def re(n,p):
    i=len(p)
    if i==n:
        print(p)
    for i in range(n):
        if not i in p :
            p.append(i)
            re(n,p)
            p.pop()

main(3)