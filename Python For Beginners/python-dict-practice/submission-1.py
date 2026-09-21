from typing import Dict # this adds type hinting for Dict

def count_characters(word: str) -> Dict[str, int]:
    freq = {}
    for w in word:
        if w in freq:
            freq[w] +=1
        else:
            freq[w] = 1
    return freq




# don't modify below this line
print(count_characters("hello"))
print(count_characters("world"))
print(count_characters("hello world"))
print(count_characters("this is a longer sentence"))
