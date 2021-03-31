# Python3 program to find next consecutive
# Number with all distinct digits
import sys
 
INT_MAX = sys.maxsize
 
# Function to count distinct
# digits in a number
def countDistinct(n):
 
    # To count the occurrence of digits
    # in number from 0 to 9
    arr = [0] * 10
    count = 0
 
    # Iterate over the digits of the number
    # Flag those digits as found in the array
    while (n != 0):
        r = int(n % 10)
        arr[r] = 1
        n //= 10
     
    # Traverse the array arr and count the
    # distinct digits in the array
    for i in range(10):
        if (arr[i] != 0):
            count += 1
     
    return count
 
# Function to return the total number
# of digits in the number
def countDigit(n):
    c = 0
 
    # Iterate over the digits of the number
    while (n != 0):
        r = n % 10
        c+=1;
        n //= 10
     
    return c
 
# Function to return the next
# number with distinct digits
def nextNumberDistinctDigit(n):
    while (n < INT_MAX):
 
        # Count the distinct digits in N + 1
        distinct_digits = countDistinct(n + 1)
 
        # Count the total number of digits in N + 1
        total_digits = countDigit(n + 1)
 
        if (distinct_digits == total_digits):
 
            # Return the next consecutive number
            return n + 1
        else:
 
            # Increment Number by 1
            n += 1
    
    return -1
 
# Driver code
if __name__ == '__main__':
    n = int(input())
 
    print(nextNumberDistinctDigit(n))