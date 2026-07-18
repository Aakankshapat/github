# Get an integer from the user
number = int(input("Enter an integer: "))

# Check if the remainder when dividing by 2 is zero
if number % 2 == 0:
    print(f"{number} is an Even number.")
else:
    print(f"{number} is an Odd number.")
