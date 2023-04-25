clear all; clc;

%function handler
f = @func;
b = @bisection;

x = (0:0.5:5+(5-1)*sqrt(5));
L_5 = f();

%plotting
plot(x, L_5(x), '--');
set(gca, 'xtick', (0:0.5:5+(5-1)*sqrt(5)));
grid on;

%computing roots
root1 = b(L_5, 0, 1, 1E-4);
root2 = b(L_5, 1, 1.5, 1E-4);
root3 = b(L_5, 3.5, 4, 1E-4);
root4 = b(L_5, 7, 7.5, 1E-4);
root5 = b(L_5, 12.5, 13, 1E-4);