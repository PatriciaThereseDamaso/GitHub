#Height requirement must be 137
#credit requirement is 10
name = str (input("Enter name:  "))
height = float (input("Enter your height(in cm):  "))
credit = float (input("Enter credit score: "))

if height >= 137 and credit >= 10:
  print("Great! You met the minimun height and credit requirement.\nEnjoy the ride!")
elif height >= 137 and credit < 10:
  print("Sorry,",name,"but the minimum credit score was not met.")
elif height < 137 and credit >= 10:
  print("Sorry", name,"but the minimum height requirement was not met")
else:
  print("Minimum height and credit requirements are not met")
  