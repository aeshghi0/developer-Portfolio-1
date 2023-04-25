close all; clear; clc;


set(groot,'defaultAxesTickLabelInterpreter','latex');  
set(groot,'defaulttextinterpreter','latex');
set(groot,'defaultLegendInterpreter','latex');

k = (20:200);
h = 2.^(-k/4);
x0 = 0;

f = @(x)exp(100*x);
dfdx = @(x)100*exp(100*x);

forward = (f(x0+h) - f(x0)) ./h;
central = (f(x0+h) - f(x0-h)) ./ (2.*h);

rel_err_forward = abs((forward - dfdx(x0))) ./ dfdx(x0);
rel_err_central = abs((central - dfdx(x0))) ./ dfdx(x0);

figure(1)
loglog(h,rel_err_forward,'--ro','LineWidth',2,'MarkerSize',10) 
hold on
loglog(h,rel_err_central,'-bs','LineWidth',2,'MarkerSize',10)
legend('Forward difference','Central difference') 
set(gca,'FontSize',30)
xlabel('h','FontSize',30);
ylabel('Relative error','FontSize',30);
grid on
axis tight
hold off
