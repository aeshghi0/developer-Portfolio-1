#LAB 4 / PS7

set1 = {1,2,3,4,5}
set2 = {2,4,6,8}
set3 = {1,5,9,13,17}
set_1_25 = set(list(range(1,26)))

set_a = set1 ^ set2
print("A)",set_a)

set_b = set1 ^ set2 ^ set3
print("B)",set_b)

set_c = (set1 & set2) | (set1 & set3)
print("C)",set_c)

set_d = set_1_25 - set1
print("D)",set_d)

set_e = set_1_25 - (set1 | set2 | set3)
print("E)",set_e)

set_f = set_1_25 | (set1 | set2 | set3)
print("F)",set_f)


##>>> 
##=============== RESTART: /Users/alieshghi/Desktop/LAB 4/PS7.py ===============
##A) {1, 3, 5, 6, 8}
##B) {17, 3, 6, 8, 9, 13}
##C) {1, 2, 4, 5}
##D) {6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25}
##E) {7, 10, 11, 12, 14, 15, 16, 18, 19, 20, 21, 22, 23, 24, 25}
##F) {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25}
##>>> 
