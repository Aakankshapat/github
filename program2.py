# defining grade taking input marks from user by implementing if -elif-else ladder
marks=int(input("Enter the Total marks:"))

if marks>=75 and marks<100:
    print("O")
elif marks >=60 and marks<75:
      print("A")
elif marks >=45 and marks<60:
    print("P")
else:
     print("Fail")    

   