def fact(n):
    if n == 1:
        return 1
    else:
     return n*fact(n-1)
num=int(input("enter any number"))
print("factorial is",fact(num))