def merge_the_tools(string, k):
    n = len(string)
    t = n//k
    for i in range(0,n,k):
        substring = ''
        for letter in string[i:i+k]:
            if letter not in substring:
                substring += letter
        print(substring)

if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)