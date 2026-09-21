from typing import List

def get_last_three_elements(my_list: List[int]) -> List[int]:
    last_three = []
    for i in range(-3, 0):
        last_three.append(my_list[i])
    return last_three


# do not modify below this line
print(get_last_three_elements([1, 2, 3]))
print(get_last_three_elements([1, 2, 3, 4, 5]))
print(get_last_three_elements([1, 2, 3, 4, 5, 6, 7, 8, 9]))
