def find_second_largest(arr):
    # Check if the array has enough numbers
    if len(arr) < 2:
        return -1
        
    first = -1
    second = -1

    for num in arr:
        # Scenario 1: Current number is strictly bigger than the largest number
        if num > first:
            second = first   # The old largest becomes the second largest
            first = num      # Update the largest number
            
        # Scenario 2: Current number is between first and second
        elif num > second:
            if num != first: # Make sure it is not a duplicate of the largest
                second = num
                
    return second

# --- Test Cases ---
print(find_second_largest([12, 35, 1, 10, 34, 1]))  # Output: 34
print(find_second_largest([10, 10, 10]))            # Output: -1
print(find_second_largest([5]))                     # Output: -1

