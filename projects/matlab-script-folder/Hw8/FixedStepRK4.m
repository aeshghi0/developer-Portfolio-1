
function [t,y] = FixedStepRK4(f,t0,tf,initC,dt)
t = t0:dt:tf;
t = t';

N = length(t);
y = zeros(N,length(initC));
y(1,:) = initC;

for i = 1:N-1
    k1 = f(t(i),y(i,:))';
    k2 = f(t(i)+dt/2,y(i,:)+k1*dt/2)';
    k3 = f(t(i)+dt/2,y(i,:)+k2*dt/2)';
    k4 = f(t(i)+dt,y(i,:)+k3*dt)';
    phi = (k1+2 * k2+2 * k3+k4)/6;
    y(i+1,:) = y(i,:) + phi*dt;
end

end