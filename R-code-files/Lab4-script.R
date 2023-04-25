n <- 10^4
simulated <- c()
theoretical <- c()

for(k in 1:100){
  r <- replicate(n,{bdays <- sample(365,k,replace=TRUE); length(unique(bdays))})
  simulated[k] <- mean(r)
  theoretical[k] <- 365*(1-(364/365)^k)
}

plot(1:100,simulated-theoretical)
abline(h=0,col="red")

