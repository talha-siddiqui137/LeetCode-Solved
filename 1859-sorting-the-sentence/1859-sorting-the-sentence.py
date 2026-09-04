class Solution:
    def sortSentence(self, s: str) -> str:
        w = s.split()
        st = sorted([i[::-1] for i in w])
        n_s = [i[::-1] for i in st]
        string = [i[0:len(i)-1] for i in n_s]
        return " ".join(string)
        # w = s.split()
        # res = ""
        # st = sorted([i[::-1] for i in w])
        # n_s = [i[::-1] for i in st]
        # string = [i[0:len(i)-1] for i in n_s]
        # for i in string:
        #     res+=i
        #     res+=" "
        # result = res[:len(res)-1]
        # return result