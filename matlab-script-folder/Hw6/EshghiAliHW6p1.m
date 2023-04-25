close all; clear; clc;


set(groot,'defaultAxesTickLabelInterpreter','latex');  
set(groot,'defaulttextinterpreter','latex');
set(groot,'defaultLegendInterpreter','latex');

format long;
x1 = -3;
y1 = 1.5;
r1 = 3.61;

x2 = 2.1;
y2 = 3.7;
r2 = 5.32;

x3 = 0.9;
y3 = 1.4;
r3 = 2.88;

x4 = -1.5;
y4 = -2.7;
r4 = 3.25;

A = (2*x2) - (2*x1);
B = (2*y2) - (2*y1);
C = (r1*r1) - (r2*r2) - (x1*x1) + (x2*x2) - (y1*y1) + (y2*y2);
D = (2*x4) - (2*x3);
E = (2*y4) - (2*y3);
F = (r3*r3) - (r4*r4) - (x3*x3) + (x4*x4) - (y3*y3) + (y4*y4);

x = ((C*E) - (F*B)) / ((E*A) - (B*D));
y = ((C*D) - (A*F)) / ((B*D) - (A*D));
x
y