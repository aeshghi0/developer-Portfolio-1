close all; clear; clc;


set(groot,'defaultAxesTickLabelInterpreter','latex');  
set(groot,'defaulttextinterpreter','latex');
set(groot,'defaultLegendInterpreter','latex');

for k=5:8
z = 10^(-k);
v = (-10)^(-k);
A = [1 1; z 0; 0 z];
b = [v 1+z 1-z];

%part 1)
[Q,R] = qr(A);
Q_t = transpose(Q);
c = b * Q_t;
r_sqr = [R(1,1) R(1,2); R(2,1) R(2,2)];
R_inv = inv(r_sqr);
R_inv(3,1) = 0;
R_inv(3,2) = 0;
xhat_analytic = c * R_inv;
xhat_analytic_x1(k-4) = xhat_analytic(1,1);
xhat_analytic_x2(k-4) = xhat_analytic(1,2);

%part 2)
T = transpose(b);
xhat_QR = A\T;
xhat_QR_x1(k-4) = xhat_QR(1,1);
xhat_QR_x2(k-4) = xhat_QR(2,1);


%part 3)
% I was kind of confused for this part about how to do it

end
