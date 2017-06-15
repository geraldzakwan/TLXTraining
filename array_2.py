import operator

n = int(input())
arr = [int(x) for x in input().split()]
hash_map = dict()
for x in arr :
    if(x in hash_map):
        hash_map[x] = hash_map[x] + 1
    else:
        hash_map[x] = 1

highest_value = max(hash_map.values())
max_out = 0
for key, value in hash_map.items():
    if(value == highest_value):
        if(key > max_out):
            max_out = key

print(max_out)
