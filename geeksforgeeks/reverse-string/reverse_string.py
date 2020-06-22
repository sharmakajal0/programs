def reverse(string):
    start = 0
    end = len(string)
    while(start < end):
        temp = string[start]
        string[start] = string[end]
        string[end] = temp

for i in range(int(input())):
    string = input()
    reverse(string)
    print(string)