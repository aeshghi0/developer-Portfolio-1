close all; clear; clc;


set(groot,'defaultAxesTickLabelInterpreter','latex');  
set(groot,'defaulttextinterpreter','latex');
set(groot,'defaultLegendInterpreter','latex');


%The b vector containing the answers
b = [2;5;9;-1;-4];

%The matrix A (function revised to satisfies the given values)
A=[1 1 1 -2 -2; 1 2 4 -10 -20; 1 3 9 -27 -81; 1 4 16 4 16; 1 5 25 20 100];

%A vector to sotre the values for p1 p2 p3 q1 q2
X = A\b;

%calculating the result of function for t (input) from -6 to 6
t = -6:6;
ft = zeros();
for k=1:13
    ft(k) =(X(1,1) + X(2,1)*t(1,k) + X(3,1)*(t(1,k)^2))/(1 + X(4,1)*t(1,k) + X(5,1)*(t(1,k)^2));
end

%plotting t vs. f(t)
plot(t,ft);
title("Plot of the computed rational curve");
xlabel("t (input value)");
ylabel("f(t) (Output value)");