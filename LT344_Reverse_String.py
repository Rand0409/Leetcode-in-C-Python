class solution:
    def ReverseString(self, s: list[str]) -> None:
        left, right = 0, len(s) - 1
        while left < right:
            s[left], s[right] =  s[right], s[left]
            left += 1
            right -= 1

a = ["a","b","c","d","e","f"]

# a[0] , a[4] = a[4] , a[0]
# print(a)

Sol = solution()
Sol.ReverseString(a)
print(a)