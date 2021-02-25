def insertion_sort(mylist):

    for x in range(1, len(mylist)):

        key = mylist[x]
        pos = x

        while(mylist[pos-1] > key and pos > 0):  # key comparison and shifting
            mylist[pos] = mylist[pos-1]
            pos -= 1

        mylist[pos] = key


mylist = [5, 6, 4, 3, 7, 2, 8, 1, 9, 0]

print('Unsorted List : ')
print(mylist)

insertion_sort(mylist)  # function call

print('Sorted List : ')
print(mylist)
