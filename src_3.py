list_1 = [int(x) for x in input().split()]
n = list_1[0]
q = list_1[1]

map = {}

for i in range(0, n):
    string_list = [x for x in input().split()]
    map[string_list[0]] = string_list[1]

query_list = []

for i in range(0, q):
    query = input()
    query_list.append(query)

for i in range(0, q):
    if (query_list[i] in map):
        print(map[query_list[i]])
    else:
        print("NIHIL")
