par(mfrow = c(2,2))

mu    <- c(0, 0)
rho   <- 0.7
sigma <- matrix(c(2, rho*sqrt(2)*sqrt(3), rho*sqrt(2)*sqrt(3), 3), nrow = 2)
xy_samp <- rmvnorm(1000, mu, sigma)
x = xy_samp[,1]
y = xy_samp[,2]

c = c(-2, 2, (rho * sqrt(3))/sqrt(2)) # todo: add a value obtained by the formula you get in Question 4
for (c_i in c) {
  plot(x, y-c_i*x, xlab = "x", ylab = "y-cx", main=paste('c=', c_i))
}

