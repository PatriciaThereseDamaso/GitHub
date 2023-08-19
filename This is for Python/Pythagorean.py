#Hello, pat. 
#This is a test for calculating the hypotenuse of a triangle

print('Hello, user. This is a pythagorean calculator(Calculating the hypotenuse)\n')
print("Choose calculator")
print(' 1 = hypotenuse\n 2 = leg A\n 3 = leg B')
String = int(input("What are we searching for?  "))

answer = String
if answer == 1:
    print("\nyou're now calculating for hypotenuse")
elif answer == 2:
    print("\nYou're now calculating for leg A")
elif answer == 3:
    print("\nYou're now calculating for leg B")

#For hypotenuse
if answer == 1:
    def hypotenuse1(legA, legB):
        return round(((legA**2 + legB**2)**0.5),2)

a = int(input("Enter value for leg A:   "))
b = int(input("Enter value for leg B:   "))

value = hypotenuse1(a,b)
print('Hypotenus value:',value)
quit()

if answer == 2:
    def leg1(hypotenuse, legb):
        return round(((hypotenuse**2 - legb**2)**0.5),2)

c = int(input("Enter value of hypotenuse:  "))
d = int(input("Enter value of leg B:    "))

value1 = leg1(c,d)
print('Leg A value:', value1)
quit()

#for leg B
while answer == 3:
    def leg2(hypotenuse, lega):
        return round(((hypotenuse**2 - lega**2)**0.5),2)

e = int(input("Enter value of Hypotenuse:   "))
f = int(input("Enter value of leg A:    "))

value2 = leg2(e,f)
print("Leg B value:", value2)
quit()
