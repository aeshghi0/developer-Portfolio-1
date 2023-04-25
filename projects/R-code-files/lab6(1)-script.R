library(mvtnorm)
par(mfrow = c(1,1))

x     <- seq(-3, 3, 0.25) 
y     <- seq(-3, 3, 0.25)
mu    <- c(0, 0)
rho   <- 0.1
sigma <- matrix(c(1, rho, rho, 1), nrow = 2)
f     <- function(x, y) dmvnorm(cbind(x, y), mu, sigma)
z     <- outer(x, y, f)

contour(x, y, z, xlab = "x", ylab = "y")
›