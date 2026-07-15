#Q.print the no 1234 as 4321 using mathmatical approach
no=1234
rev=0
while no > 0:
        r=no%10
        rev=(rev*10)+r
        no=no//10
        
print(rev)      
