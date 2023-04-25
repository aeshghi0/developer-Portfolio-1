#LAB4 / PS3

def main():
    original_list = createList()
    organized_list = removeDuplicates(original_list)
    print("Original List: ",original_list)
    print("List after removing duplicates: ",organized_list)

def createList() -> list:
    original_list = []
    again = 'Y'
    while again.upper() == 'Y':
        item = input("Enter a number: ")
        original_list.append(float(item))
        again = input("Do you want to add another item (Y = yes / anything else: no): ")

    print("Here is your list: ",original_list)
    return original_list

def removeDuplicates(original_list:list) -> list:
    index=0
    original_list.sort()
    organized_list=[]
    for i in original_list:
        if i not in organized_list:
            organized_list.append(float(i))
    return organized_list

if __name__=="__main__":
    main()

##>>> 
##=============== RESTART: /Users/alieshghi/Desktop/LAB 4/PS3.py ===============
##Enter a number: 1
##Do you want to add another item (Y = yes / anything else: no): y
##Enter a number: 2
##Do you want to add another item (Y = yes / anything else: no): y
##Enter a number: 3
##Do you want to add another item (Y = yes / anything else: no): y
##Enter a number: 4
##Do you want to add another item (Y = yes / anything else: no): y
##Enter a number: 3
##Do you want to add another item (Y = yes / anything else: no): y
##Enter a number: 5
##Do you want to add another item (Y = yes / anything else: no): y
##Enter a number: 6
##Do you want to add another item (Y = yes / anything else: no): y
##Enter a number: 4
##Do you want to add another item (Y = yes / anything else: no): n
##Here is your list:  [1.0, 2.0, 3.0, 4.0, 3.0, 5.0, 6.0, 4.0]
##Original List:  [1.0, 2.0, 3.0, 3.0, 4.0, 4.0, 5.0, 6.0]
##List after removing duplicates:  [1.0, 2.0, 3.0, 4.0, 5.0, 6.0]
##>>> 
