from typing import List

def read_integers() -> List[int]:
    nums = input()
    lst = nums.split(",")
    int_list = []
    for l in lst:
        int_list.append(int(l))
    return int_list

# do not modify the code below
print(read_integers())
print(read_integers())
print(read_integers())
