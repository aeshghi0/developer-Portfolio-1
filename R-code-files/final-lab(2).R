#markov chain
library(expm)
Q = matrix(c(0, 0.5, 0.5, 0,   0,
             0,   0, 0.5, 0.5, 0,
             0.5, 0, 0,   0.5, 0,
             0.5, 0, 0,   0,   0.5,
             0,   0, 0,   0,   1),
           nrow=5, ncol=5, byrow=TRUE)  #chutes and ladders Markov chain representation

#obtaining higher order probabilities (matrix multiplication)
Q2 = Q %*% Q
Q3 = Q2 %*% Q
Q4 = Q3 %*% Q
Q5 = Q4 %*% Q

Q5_expm = Q %^% 5

Q[4,5]

#Another way

decomp = eigen(t(Q))
eigval = decomp$values
eigvec = decomp$vectors
s = eigvec[,eigval==1] #stationary distribution
Re(s) #Show as real values

