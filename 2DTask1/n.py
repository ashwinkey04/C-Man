def answer(area):
    listsol = []
    while (area):
        x = int(area ** 0.5)
        y = x ** 2
        area -= y
        listsol.append(y)
    return listsol

t=int(input())
print(answer(t))