#LAB 4/ PS4

nums = (1,2,3,4,5,6,7,8,-3,-6,-2-1)
nums_list = []
for i in nums:
    if i > 0:
        nums_list.append(i)

nums_list.sort()
nums_list_tupleV = tuple(nums_list)

print("Original Tuple :",nums)
print("New Tuple with Positive numbers :",nums_list_tupleV)


##>>> 
##=============== RESTART: /Users/alieshghi/Desktop/LAB 4/PS4.py ===============
##Original Tuple : (1, 2, 3, 4, 5, 6, 7, 8, -3, -6, -3)
##New Tuple with Positive numbers : (1, 2, 3, 4, 5, 6, 7, 8)
##>>> 
