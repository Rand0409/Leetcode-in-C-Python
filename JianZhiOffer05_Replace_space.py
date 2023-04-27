class Solution:
    def ReplaceSpace(self,s: str) -> str:
        space_count = s.count(" ")
        res = list(s)
        res.extend([" "] * space_count * 2)
        left, right = len(s) - 1, len(res) - 1
        
        while left >= 0:
            if res[left] != ' ':
                res[right] = res[left]
                right -= 1
            else:
                # [right - 2, right), 左闭右开
                res[right - 2: right + 1] = '%20'
                right -= 3
            left -= 1
        return ''.join(res)


def urlify(string,length):
    output = []

    for char in range(length):
        print(char)
        char = string[char]
        print("2",char)
        if char == ' ':
            output.append('%20')
            continue
        output.append(char)
    return ''.join(output)

string = "a s d s"
c = urlify(string,7)
print(c)

# print(string.split(" "))
# print("%20".join(string.split(" ")))



string2 = "qwert"
