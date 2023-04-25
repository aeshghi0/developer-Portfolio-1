%% 
% commanding the computer the sin(5)/5 and assigning it to "true value"

true_value = sin(5)/5; 
%% 
% computingthe approximation of first formula

n = (0:6);
n2 = n * 2;
n3 = n2 + 1;
fact = factorial(n3);
sign = [1 -1 1 -1 1 -1 1];
fivs = [5^0 5^2 5^4 5^6 5^8 5^10 5^12];
top = sign .* fivs;
expr = top ./ fact;
approx1 = sum(expr);
%% 
% computing the approximation for secondformula

m = [2^1 2^2 2^3 2^4 2^5 2^6 2^7];
val = 5 ./ m;
expr2 = cos(val);
approx2 = prod(expr2);
%% 
% calculating the relative errors of each approximation

relErr1 = abs((approx1 - true_value) / true_value) * 100;
relErr2 = abs((approx2 - true_value) / true_value) * 100;
%% 
% Based on the answers, the relative errror for the first approximation formula 
% was 2.23% for first formula and 0.025% for the second formula