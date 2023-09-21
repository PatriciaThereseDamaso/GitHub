Gryffindor = 0
Hufflepuff = 0
Slytherin = 0
Ravenclaw = 0

print("Q1: Do you like Dawn or Dusk?")

print("1 = Dawn")
print("2 = Dusk")

answer = int(input("Your Choice: "))
if answer == 1:
    Gryffindor += 1
    Ravenclaw += 1
elif answer == 2:
    Hufflepuff += 1
    Slytherin += 1
else:
    print("Invalid Input")

print("Q2: When I'm dead, I want people to remember me as:")

print("1 = The Good")
print("2 = The Great")
print("3 = The Wise")
print("4 = The Bold")

input1 = int(input("Your Choice: "))
if input1 == 1:
    Hufflepuff += 2
elif input1 == 2:
    Slytherin += 2
elif input1 == 3:
    Ravenclaw += 2
elif input1 == 4:
    Gryffindor += 2
else:
    print("Invalid Input")

print("Q3: Which kind of instrument most pleases your ear?")

print("1 = The Violin")
print("2 = The Trumpet")
print("3 = The Piano")
print("4 = The Drum")

input2 = int(input("Your Choice: "))
if input2 == 1:
    Slytherin += 4
elif input1 == 2:
    Hufflepuff += 4
elif input2 == 3:
    Ravenclaw += 4
elif input2 == 4:
    Gryffindor += 4
else:
    print("Invalid Input")

print("gryffindor:", Gryffindor )
print("hufflepuff:", Hufflepuff)
print("ravenclaw:", Ravenclaw)
print("slytherin:", Slytherin)

most_points = max(Gryffindor, Hufflepuff, Ravenclaw,Slytherin)

if Gryffindor == most_points:
    print("Gryffindor!")
elif Hufflepuff == most_points:
    print("Hufflepuff!")
elif Ravenclaw == most_points:
    print("Ravenclaw!")
else:
    print("Slytherin!")
