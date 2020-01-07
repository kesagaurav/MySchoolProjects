n=int(input("enter no"))
rev=0
m=n
while(n>0):
    r=n%10
    rev=(rev*10)+r
    n/=10
    print("\n reverse is=",rev)
    
    
