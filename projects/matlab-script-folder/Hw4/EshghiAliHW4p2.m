close all; clear; clc;


set(groot,'defaultAxesTickLabelInterpreter','latex');  
set(groot,'defaulttextinterpreter','latex');
set(groot,'defaultLegendInterpreter','latex');

format long

%Problem 2

%the g() function for the given function f()
g = @(x)(cos(sin(x)));

%Array to store the approximations
x = zeros(1,31);

%Initial guess
x0 = 5;
i = 1;

%While-loop going over the fixed point recursion of function g()
while i <= 30
    x(i) = g(x0);
    x0 = x(i);
    i = i+1;
end

root = x(30);