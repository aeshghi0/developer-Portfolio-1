close all; clear; clc;


set(groot,'defaultAxesTickLabelInterpreter','latex');  
set(groot,'defaulttextinterpreter','latex');
set(groot,'defaultLegendInterpreter','latex');

format long;

tspan = [0,100];
y0 = [99 55 0 0];
[t_ode45, y_ode45] = ode45(@SIRD_dynamics,tspan,y0);

plot(t_ode45,y_ode45(:,1),'b',t_ode45,y_ode45(:,2),'r',t_ode45,y_ode45(:,3) ...
    ,'g',t_ode45,y_ode45(:,4),'k');

hold on
[t,y] = FixedStepRK4(@SIRD_dynamics,0,100,[99,55,0,0],.5);
plot(t,y(:,1),'bo',t,y(:,2),'ro',t,y(:,3),'go',t,y(:,4),'ko');
hold off