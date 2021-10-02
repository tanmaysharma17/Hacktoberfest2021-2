# *args and **kwargs tutorial
# *vars and **kvars tutorial

def function_1(name, age, rollno):
    print("This name of the student is ", name, 
    "and age is ", age, "and rollno is ", rollno)

function_1("Mahi", 22, 4532)

def argsfunction(*args):
    if (len(args)==2):
        print("This name of the student is ", args[0], 
    "and age is ", args[1])
    else:
        print("This name of the student is ", args[0],"and age is ", args[1], "and rollno is ", args[2])



argsfunction("Shivam", 22, 5432)

parchi = ["Harry", 22]
argsfunction(*parchi)



# KWARGS
# It is like a dictionary in which we can fill any amount of key value pair

def printmarks(**kwargs):
    print(type(kwargs))
    for name, their_marks in kwargs.items():
        print(name,their_marks)




marklist={"Mahi": 23, "Shicam ": 23,"sfsfa":22, "jdsajf": 22, "dsgaswe": 23, "Arohi": 25}
printmarks(**marklist)











