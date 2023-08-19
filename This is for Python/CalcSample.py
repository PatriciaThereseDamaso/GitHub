def hypotenuse1(legA, legB):
        return round(((legA**2 + legB**2)**0.5),2)

a = int(input("Enter value for leg A:   "))
b = int(input("Enter value for leg B:   "))

value = hypotenuse1(a,b)
print('Hypotenus value:',value)
quit()
