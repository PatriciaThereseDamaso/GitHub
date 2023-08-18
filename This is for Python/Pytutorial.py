#Why use python - it's easy to read, and makes it the beginner friendly programming language
# Python is used on data analysis and evaluation, Artificial Intelligence, Machine Learning, Web development, 

#This are called comments - It helps people understand the code that you are writing
#Comments also help you explain your code to others 

#Things to Remember in Python

#In python, you don't need to write the data type that you are using like int, float, string.
#Unlike in C, Python doesn't use curly braces '{}', and semi coloons ':'.
#Printing in python is simply (print), unlike in C that is (printf)
#Smallcaps are required for writing code in python

# Ints are numbers without decimal point 
#Numbers 0-9 are called ints 

# Here is printing an int
print(67)

#Here is printing ints by separating them with a comma
print(78, -9)

#Floats are numbers with decimal point
# 9.5, 3.6 are examples of floats 

#This is printing a float
print(6.3)

#Here is printing flaots by separating it with a comma
print(5.4, 7.8)

#Strings are text wrapped inside quotation marks 
#('Hello') is a string indicated by a text within a set of apostrophes and clauses

#Here is printing a string 
print('Hello, World')

#Here is printing two strings and separating them with a comma 
print('Hey', 'This is Pat Learning to Code')





#Creating Variables in Python
#X, name, age are variables

x = 25 
# X is the variable
# = is used to assign values to variables
# 25 is the value

#I tried running a variable with a name and it seems the value must have an apostrophe (') for it to work 
name = 'Pat'
# name is the variable
# = is used to store a string value inside the variable
# pat is the string value 
# (') is used to identify that the input is a string 

# In python the VALUE on the right-hand side is assigned to the VARIABLE that is on the left.

#Printing the variable 

# (1) Create a variable with a string as value 
name = 'Pat' 

#print the variable
print(name)

# (2) Create a variable with an number as value 
age = 18

#print the variable 
print(age)

#Difference between:

print('age')
# adding qoutation mark will make it a string and not variable. 
# That's why if we run this, we'll get the output (age).

print(age)
# this prints the value (18) that is stored within the variable (age).

#Changing Values in the variables
name2 = 25
name2 = 'pat' 

print(name2)
#The initial value of name 2 is 25 but we changed the value of name2 to 'pat' 
#Printing this will give us the value 'pat'

#Value of one variable to another - assign the value of one variabel to another.
#example (1)
color1 = 'yellow' 
print(color1) #Output - yellow

color2 = 'green'
print(color2) #Output - green

#assigning the value of color2 to color1
color1 = color2
#If you don't remember (=) will assign the value of the right-side into the left.

print(color1) #Output - green

#example(2)
city1 = 'San Francisco' 
print(city1) #output - San Francisco

city1 = city2
#This will create an error as haven't assigned a value into city2.
#The value of city2 must be coded before assigning the value of city2 to city1. 

city2 = 'Cloud City'

#Let's try it again....run on testing area.py
city1 = 'San Francisco' 
print(city1) #output - San Francisco

city2 = 'Cloud City'

city1 = city2

print(city1) #Output - Cloud city

#example 3

# create the favorite_food variable
favorite_food = 'steak'
print(favorite_food)

# create the food variable
food = 'pizza'

# assign food to favorite_food
favorite_food = food

# print the favorite_food variable
print(favorite_food)

#What makes a good variable name
    # (1) Name should be clear and concise; 
        # Good - name, age, number; 
        # Bad - nm, aG31k, no1
    # (2) Use underscores if the name is consist of two or more names to separate them. 
        # Legal variable names - favorite_food, cellphone_number
        # Illegal variable names - favorite food, number#1
            #Never use spaces or other symbols, only alphabet, numbers, or underscores
            
#Variables are case sensitive
    #example
age = 16
print(Age) #We'll create an error since variable (Age) is not the same as our variable (age)





#Printing strings and variables

#printing multiple strings and variables in a single print() function by separating them with commas.
#example
name = 'Patricia'
print('Name:', name)
# The print function treats ('Name:') and name as different variables because they are separated by a comma (,)

#example
name = 'Patpat'
 
print('Name:', name)
print('Name:'     ,      name)
print('Name:',name)
#All of the print function will print 'Patpat'

#example
alpha = {}
alpha['A'] = "  A     A A   A   A  AAAAA  A   A  A   A  A   A  "
alpha['B'] = "BBBB   B   B  B   B  BBBB   B   B  B   B  BBBB   "

for i in range(7):
  print (alpha['A'][i*7:i*7+7], alpha['B'][i*7:i*7+7]) #this will print the letters A and B in a 7*7 block 

#Printing new line in python 
#To print new line in our code, we'll use (\n)
    #This creates a new line
    
#example
print('Hey\n\nHow are you?')
#this will create 3 lines of code, (\n) functions as the enter function

#a letter to myself
print('Hello, Pat from the future')
print('Right now, you are studying for computer science \nI hope this letter will find you well. \n\nkeep chasing that dream, okay?')

# A Boolean data type, or bool, stores a value that can only be either true or false. 
# In Python, it's capitalized True or False
# It's named after the British mathematician George Boole (1815-1864

late_to_class = False
cranky = True

#Operators
#Python has the following arithmic operators.
#addition (+), subtraction (-), multiplication (*), division(/), and modulo (%) - returns the remainder

#example
temperature_farenheit = 79  #Assigning value to temperature_farenheit
#to get converted version, we'll assign the value on the variable (temperature_height) minus 32 in a parenthesis and;
#dividing the value to 1.8
Temperature_celsius = (temperature_farenheit - 32) /1.8 
#printing in this patter will give us the string ('temperature_celsius') and the value of variable 
print('Temperature_celsius:', Temperature_celsius)



#exponents - python uses the notation ** to signify exponents
#example (1)
score = 2**3 #this is 2 raised to the power of 3
print(score) #output - 8

#example(2) - BMI
mass = 55
height = 1.8 ** 2

BMI = round((mass / height), 2)

print('BMI:', BMI)

#search BMI.py for more complex coding
#remember: adding define(def) will make a function 
#remember : return function allows to return a value on the define function 