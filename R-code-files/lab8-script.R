
b<- seq(0.1,1,0.01)
payoff<- c()
nsim <- 10^5
v <- runif(nsim)
for(k in 1:length(b)){payoff[k]<-mean(v[b[k] > 2/3*v]-b[k])}
plot(b,payoff, type="l", main="Average payoff", col="blue")
