#Central limit theory

n = 10 #number of samples
nsim = 10^4 #repeat the sampling for 10000 times
x = matrix(runif(nsim*n), nrow = nsim, ncol = n) #each row is a replicate of 10 samples

xbar = rowMeans(x) #to calculate the x(bar)_10

hist(xbar)
