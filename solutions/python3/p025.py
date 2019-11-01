# Works perfectly fine on all test cases

result=[1]*5001
a=0
b=1
c=0
counter=1
for j in range (1,5001):

    while(c%(10**(j-1))==c):
        c=a+b
        a=b
        b=c
        counter+=1
    result[j]=counter
repetition=int(input())
for i in range (repetition):
    n=int(input())
    print(result[n])
