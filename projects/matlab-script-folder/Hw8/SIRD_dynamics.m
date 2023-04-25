
function y = SIRD_dynamics(t,y)
beta = .45;
gamma = .04;
mu = .01;
N = 1000;

y = [-beta*y(2)*y(1)/N; beta*y(2)*y(1)/N-gamma*y(2)-mu*y(2);gamma*y(2);
    mu*y(2)];
end