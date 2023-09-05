def interchange():
    l=[1,2,3,4,5,6]
    print(l)
    le=len(l)
    temp=l[le-1]
    l[le-1]=l[0]
    l[0]=temp
    print(l)
def swap():
    a=10
    b=20
    #a,b=b,a

    #using add and sub
    #a=a+b
    #b=a-b
    #a=a-b

    #using mul and div

    a=a*b
    b=a/b
    a=a/b
    print(a,b)
def length():

    le=[1,2,3,4,5,6]
    c=0
    #using len()
    #l=len(le)

    #using for
    #for i in le:
    #    c=c+1
    #print(c)

    #using sum() & comprehension 
    c=sum(1 for i in le)
    print(c)
def max2():
    a=int(input("enter 1: "))
    b=int(input("enter 2: "))
    if a>b:
        print(a,"is greater")
    else:
        print(b,"is greater")
def min2():
    a=int(input("enter 1: "))
    b=int(input("enter 2 :"))
    if a<b:
        print(a,"is lesser")
    else:
        print(b,"is lesser")



