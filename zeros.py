# Find trailling zeroes.

def find_trailling_zeroes(n):
    count=0
    while(n>=5):
        n=n//5
        count+=n        
    print(count)

find_trailling_zeroes(100)