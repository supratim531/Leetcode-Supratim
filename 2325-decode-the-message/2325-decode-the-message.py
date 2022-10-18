class Solution:
    def decodeMessage(self, key: str, message: str) -> str:
        d = {}
        ans = ""
        value = 0
        
        for i in key:
            if i != " ":
                if d.get(i) == None:
                    d[i] = 97 + value
                    value = value + 1
        
        for i in message:
            if i == " ":
                ans += " "
            else:
                ans += chr(d.get(i))
        
        return ans
