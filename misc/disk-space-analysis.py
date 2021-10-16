def segment(x, space):
    if len(space) == 1:
        return space[0]
    if len(space) == x:
        return max(space)
    limit = len(space) - x
    fragment =[]
    for i in range(limit+1):
        fragment.append(min(space[i:(i+x)]))
    return max(fragment)






x = 2
space = [8, 2, 4, 6]
print(segment(x, space))