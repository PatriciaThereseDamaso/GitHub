import random

def value(question):
    return(question)

#creating a string where the user can ask a question as input 
answer = input("Question:    ")


#create a list
num = ["Yes - definitely", 
       "It is decided so", 
       "Without a doubt", 
         "Reply Hazy, try again", 
         "Ask again later", 
         "Better not tell you now", 
             "My sources says no",
             "Outlook not so good",
             "Very doubtful"]

sagot = random.choice(num)
print(sagot)

#as you can see, we didn't do anything with the input 'question' string because the value doesn't matter since the answer will always be randomized.
