from typing import List

def contains_duplicate(words: List[str]) -> bool:
    seen = set()
    seen.add(words[0])

    for i in range(1, len(words)):
        if words[i] in seen:
            return True
        seen.add(words[i])
    
    return False
    

# do not modify code below this line
print(contains_duplicate(["hello", "world", "hello"]))
print(contains_duplicate(["hello", "world", "i", "am", "great"]))
print(contains_duplicate(["hello", "hello", "hello"]))
print(contains_duplicate(["Hello", "hellooo", "hello"]))
