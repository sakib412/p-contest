def binary_search(ordered_list,item):
    low = 0
    high = len(ordered_list) - 1

    result = None

    while low <= high:
        mid = int((low+high) / 2)
        guess = ordered_list[mid]
        
        if guess == item:
            return mid
        elif guess < item:
            low = mid + 1
        elif guess > item:
            high = mid - 1
    return None

l = [0,1,2,3,4,5,6,7,8,9,10,12,14,45,56,67,77,100, 105,110,111,112,113,114,115]
index = binary_search(l, 115)
print(index)