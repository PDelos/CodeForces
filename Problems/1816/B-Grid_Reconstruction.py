for i in range(int(input())):
    a=int(input())
    for l in range(a//2):
        print(a*2-l*2,(l+1)*2,end=" ")
    print()
    for z in range(a//2):
        print(1+z*2,a+1+z*2,end=" ")
    print()