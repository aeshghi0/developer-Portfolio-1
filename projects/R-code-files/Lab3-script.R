#Question 1
 xs <- 0:7
 ys <- pbinom(xs,7,0.5)
 plot(xs, ys, type="s", main="Cumulative distributation function for Bin(7,0.5)")

#Used different probabilities in different run for generating the plots
 
#Question 3
 #plotting the CDF
 passengers = 1:110
 seats = 100
 passSeat = pbinom(seats, passengers, 0.9)
 plot(passengers, passSeat, type="s", main="CDF of everyone gets a seat")

#Question 4
 #plotting the PMF
 n <- 100
 k <- 1:n
 r <- 0.7
 p <- 0.8
 survive <- dbinom(k,n,(p*r))
 plot(k, survive, type="s", main="PMf of chick to survive")
 

#Question 5
 # part b
 pr <- dhyper(7,75,25,10) + dhyper(8,75,25,10) + dhyper(9,75,25,10) + dhyper(10,75,25,10)
 pr 
 
 