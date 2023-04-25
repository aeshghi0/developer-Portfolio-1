#Question 1: Monty Hall problem
n <- 10^5   #total number of trials

#picking one door to put the car behind it
cardoor <- sample(3,n,replace = TRUE)

#A vector to keep track of which door Monty opens
opendoor <- c()
#if the car is behind door 1 (contestant choice), opens 2 or 3
opendoor[which(cardoor==1)] <- sample(c(2,3),1)
#if the car is behind door 2, he opens door 3
opendoor[which(cardoor==2)] <- 3
#if the car is behind door3, he opens door 2
opendoor[which(cardoor==3)] <- 2

#A vector to keep track of contestant switching door
switchdoor <- c()
#if Monty opens door 2, contestant switches to door 3
switchdoor[which(opendoor==2)] <- 3
#if Monty opens door 1, contestant switches to door 2
switchdoor[which(opendoor==3)] <- 2

#A vector to keep track of when the switching strategy wins
wins <- c()
#adds a 1(TRUE) if the door switched to matches the cardoor
wins[which(switchdoor==2 & cardoor==2)] <- 1
wins[which(switchdoor==3 & cardoor==3)] <- 1
#adds a 0(FALSE) if the door switched to, doesn't match 
wins[which(switchdoor==2 & (cardoor==1 | cardoor==3))] <-0
wins[which(switchdoor==3 & (cardoor==1 | cardoor==2))] <-0

#probability that the switching strategy always works
prob = sum(wins) / n

