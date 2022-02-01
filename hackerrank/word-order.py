n = int(input())
words = {}
while n:
    word = input()
    try:
        words[word] +=1
    except KeyError:
        words[word] = 1

    n -=1
print(len(words))
print(*words)
print(*words.values())
