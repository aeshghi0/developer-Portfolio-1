def main():
    myContacts={"Fred":7235591,"Mary":3841212,
                "Bob":3841212,"Sarah":2213278}

    nameList=findnames(myContacts,3841212)
    print("names for 384-1212: ",end=" ")


def findnames(contacts,numbers):
    namelist=[]

    for name in contacts:
        if contacts[names]==numbers:
            namelist.append(name)

    return namelist


def printAll(contacts):
    print("All names and numbers")
    for key in sorted(contacts):
        print("%-10s %d"%(key,contacts[key]))


