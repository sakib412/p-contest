# https://www.hackerrank.com/challenges/python-string-formatting/problem

def decimal_to_octal(digit):
    octals = list()
    type(octals)
    while(digit != 0):
        remainder = digit%8
        octals = octals.append("hello")
        digit  = int(digit/8)
    return octals



def print_formatted(number):
    for i in range(number):
        if i < 100:
            continue
        octal = decimal_to_octal(i+1)
        print(f"{i+1}    {octal}")
    

if __name__ == '__main__':
    n = int(input())
    # print_formatted(n)
    print(decimal_to_octal(n))