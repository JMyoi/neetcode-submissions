def concatenate(s1: str, s2: str) -> str:
    word = s1 + s2
    if len(word) > 10:
        return "Too long!"
    return word




# do not modify below this line
print(concatenate("He", "llo"))
print(concatenate("Hello ", "world!"))
print(concatenate("Length", "of10"))
