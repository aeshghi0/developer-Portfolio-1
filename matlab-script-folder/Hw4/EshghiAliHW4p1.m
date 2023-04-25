close all; clear; clc;


set(groot,'defaultAxesTickLabelInterpreter','latex');  
set(groot,'defaulttextinterpreter','latex');
set(groot,'defaultLegendInterpreter','latex');

format long

%Problem 1:
%part a)

%function to compute x = 3^1/5 -> x^5 = 3 -> f(x) = x^5 - 3 = 0
y = @(x)(x^5 - 3);

%derivative of function f'(x) = 5 * x^4
dy = @(x)(5*x^4);

%initial guess x0 = 2
x0 = 2;

% vector to store the answers of iterations
x = zeros(1,6);


iter = 6;          %Maximum number of iteration

for i=1:iter
    x(i) = x0 - y(x0)/dy(x0);
    x0 = x(i);
end

%Part b)

%function given with the real root in range [0,1]
f = @(x)(2.*x.^5 - 5.*x.^4 + 20.*x.^3 - 10.*x.^2 + 10.*x - 1);

%calculating the approximation of x for function using the answers from
%iterations
x_approx = (x(6) - 1) / (x(6) + 1);

%plotting the x_approx together with function f(x) given
hold on;
range = 0:0.1:1;
plot(range,f(range))
plot(x_approx,0,'ro','LineWidth', 2, 'MarkerSize', 10)
