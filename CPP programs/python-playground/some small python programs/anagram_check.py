#LAB4 / PS6

def main():
    words = input("Enter two words separated by a space: ")
    if are_anagrams(words) == True:
        print("The words cinema and iceman are anagrams.")
    else:
        print("Bad input")


def are_anagrams(words:str):
    checklist1 = []
    checklist2 = []

    for i in words:
        if i == " ":
            word1 = words[:int(i)]
            word2 = words[1+int(i):]

    for x in word1:
        if x not in checklist1:
            checklist1.append(x)

    for z in word2:
        if z not in checklist2:
            checklist2.append(z)

    if checklist1.sort() == checklist2.sort():
        return True

if __name__=="__main__":
    main()
