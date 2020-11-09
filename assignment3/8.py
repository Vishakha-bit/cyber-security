def spy_games(li):

    #Iterate over the list
    for idx in range(len(li)):
        #If a slice of length 3 matches [0,0,7] return True
        if [0,0,7] == li[idx:idx+3]:
            return True

    #If no such slice found, return False
    return False

print(spy_games([1, 0, 3, 0, 6, 7]))
print(spy_games([1, 0, 3, 0, 0, 7]))
print(spy_games([0, 0, 7, 1, 0, 3]))
print(spy_games([1, 0, 0, 7, 2, 3]))
