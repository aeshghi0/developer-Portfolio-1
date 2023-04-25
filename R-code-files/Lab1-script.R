##Question 1
#Birthday problem
k <- 13
1-prod((365-k+1):365)/365^k

##Question 2
#Cereating figure 1.5 from textbook (code from assignment)
prob <- c()
for(k in 1:100){
  prob[k] <- 1-prod((365-k+1):365)/356^k}
plot(1:100,prob)
abline(h=0.5,col="red")

##Question 3
# a) How many possibilities for 5 nights and 10 restuarants
psb <- factorial(10)/factorial(5)

# b) How many possibilities if he's okay to eat at a restuarant more than
#once but not tow nights in a row
psb2 <- 10 * 9 * 9 * 9 * 9

##Question 4
# b)What is the probability of one person being chosen more than once
res <- 10^6
candids <- 1000
remain <- res - candids
prob4 <- 1-(factorial(res) / factorial(remain) * res^candids)
# The answer is 0.3947

##Question 5
# k phone number with n location 
prob5 <- 1 - choose(n,k)
