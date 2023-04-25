#Ali Eshghi
#1112261
#Homework 4


ONE_TEN=[1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

def main():
    
    print("the original data for all functions is",ONE_TEN)
    data=list(ONE_TEN)
    print("the list after swap is ",swapfirstlast(data))

    data=list(ONE_TEN)
    print("the list after shifting right is",shifright(data))

    data=list(ONE_TEN)
    print("the list after replacing even is ",replaceEven(data))

    data=list(ONE_TEN)
    print("the list after replacing with the neighbors is ",replaceneighbors(data))

    data=list(ONE_TEN)
    print("the list after removing the middle elements ",removemiddle(data))

    data=list(ONE_TEN)
    print("the list after moving the even elements ",eventofront(data))

    data=list(ONE_TEN)
    print("the second largest value is ",secondlargest(data))

    data=list(ONE_TEN)
    print("the list is in increasing order ",isincreasing(data))
    
    data=list(ONE_TEN)
    print("The list has adjacent duplicates: ",hasduplicates(data))

    data=list(ONE_TEN)
    print("The list has duplicates: ",hasduplicates(data))

def swapfirstlast(data)->list:
    t=0
    data=list(ONE_TEN)
    t=data[0]
    data[0]=data[9]
    data[9]=t
    return data

def shifright(data)->list:
    data=list(ONE_TEN)
    del data[9]
    data.insert(0,10)
    return data

def replaceEven(data)->list:
    data=list(ONE_TEN)
    for i in data:
        if data[i]%2==0:
            data[i]=0
    return data
        
def replaceneighbors(data)->list:
    data=list(ONE_TEN)
    data_1=[]
    data_1.insert(0,data[0])
    data_1.insert(9,data[9])
    for i in data[0:8]:
        if data[i]>data[i-1] and data[i]<data[i+1]:
            data_1.insert(i,data[i+1])
        else:
            data_1.insert(i,data[i-1])
    data=data_1
    return data

def removemiddle(data)->list:
    data=list(ONE_TEN)
    x=len(data)
    if len(data)%2==0:
        data.remove(data[int(x/2)])
        data.remove(data[int((x/2)-1)])
    elif len(data)%2==1:
        data.remove(data[int((x-1)/2)])
    return data

def eventofront(data)->list:
    data=list(ONE_TEN)
    data_e=[]
    for i in data:
        if i%2==0:
            data_e.append(int(i))
    for i in data:
        if i%2==1:
            data_e.append(int(i))        
        
    return data_e

def secondlargest(data)->int:
    data=list(ONE_TEN)
    data.sort()
    second_largest=data[len(data)-2]
    
    return second_largest
    
def isincreasing(data):
    data=list(ONE_TEN)
    for i in range(0,(len(data)-2)):
        if data[i+1]>data[i]:
            return True
        else:
            return False

def hasadjacentduplicates(data):
    for i in data:
        if data[i]==data[i+1]:
            return True
        else:
            return False

def hasduplicates(data):
    data=list(ONE_TEN)
    data.sort()
    for i in data:
        if data[i]==data[i+1]:
            return True
        else:
            return False

if __name__=='__main__':
    main()


##>>> 
##======== RESTART: /Users/alieshghi/Desktop/homework 4/PS1_A_Eshghi.py ========
##the original data for all functions is [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
##the list after swap is  [10, 2, 3, 4, 5, 6, 7, 8, 9, 1]
##the list after shifting right is [10, 1, 2, 3, 4, 5, 6, 7, 8, 9]
##the list after replacing even is  [1, 0, 3, 0, 5, 0, 7, 0, 9, 0]
##the list after replacing with the neighbors is  [1, 3, 4, 5, 6, 7, 8, 9, 10, 10]
##the list after removing the middle elements  [1, 2, 3, 4, 7, 8, 9, 10]
##the list after moving the even elements  [2, 4, 6, 8, 10, 1, 3, 5, 7, 9]
##the second largest value is  9
##the list is in increasing order  True
##The list has adjacent duplicates:  False
##The list has duplicates:  False
##>>> 
