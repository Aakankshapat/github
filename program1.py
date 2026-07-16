# Q2.1. Palindrome NumberProblem: Write a function is_palindrome(n) to check if integer n reads the same backward as forward.Constraints: Do not convert the integer to a string.Input: n = -121 → Output: False (Outputs False because of the negative sign).Input: n = 1221 → Output: True.
def is_palindrome(n: int) -> bool:
    # Negative numbers and numbers ending in 0 (except 0 itself) are not palindromes
    if n < 0 or (n % 10 == 0 and n != 0):
        return False
        
    original = n
    reversed_num = 0
    
    while n > 0:
        last_digit = n % 10
        reversed_num = (reversed_num * 10) + last_digit
        n //= 10  # Integer division to remove the last digit
        
    return original == reversed_num

# Test cases
print(is_palindrome(1221))  # Output: True
print(is_palindrome(-121))  # Output: False
print(is_palindrome(10))    # Output: False
