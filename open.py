class Student():
    college_name="ABC college"
    def __init__(self,name,marks,roll):
        self.name=name
        self.marks=marks
        self.roll=roll
    def welcome(self):
        print("hi ! welcome,",self.name)   

    def get_marks(self):
        return self.marks 
    
    def get_roll(self):   
        return self.roll
     
    @staticmethod
    def hello():
        print("Hello")    

s1=Student("Aakanksha",97,23) 
print(s1.name,s1.marks)   
s2=Student("Aditi",98,22)

s1.welcome()
print("marks is",s1.get_marks())
print("roll no is",s1.get_roll())
print(s1.college_name)
s1.hello()

s2.welcome()
print("marks is",s2.get_marks())
print("roll no is",s2.get_roll())
print(s2.college_name)
s2.hello()
    

