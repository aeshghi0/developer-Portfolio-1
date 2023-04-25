clear;clc;

%loading the matrix
A = readmatrix("AdjacencyMatrix.txt");

%columns sums
n = length(A);
s = zeros(1,n);

for i = 1:n
    s(i) = sum(A(:,i));
    if s(i) == 0
        s(i) = n;
    end
end

new = A./s;

alpha = 0.25:0.25:1;

G_1 = alpha(1)*s + (1 - alpha(1))/500 * ones(500);
G_2 = alpha(2)*s + (1 - alpha(2))/500 * ones(500);
G_3 = alpha(3)*s + (1 - alpha(3))/500 * ones(500);
G_4 = alpha(4)*s + (1 - alpha(4))/500 * ones(500);

p = zeros(500,1);
p(:) = 1/500;
x = zeros(10,1);
i = 1:10;
hold on
for k = 1:10
    p(:,k+1) = (G_1 * p(:,k));
    x(k) = TVdist(p(:,k+1),p(:,k));
end
semilogy(i,x,'r');
p1 = p(:);

x2 = zeros(10,1);
for k = 1:10
    p(:,k+1) = (G_2 * p(:,k));
    x2(k) = TVdist(p(:,k+1),p(:,k));
end
semilogy(i,x2,'g');
p2 = p(:);

x3 = zeros(1,10);
for k = 1:10
    p(:,k+1) = (G_3 * p(:,k));
    x3(k) = TVdist(p(:,k+1),p(:,k));
end
semilogy(i,x3,'b');
p3 = p(:);

x4 = zeros(1,10);
for k = 1:10
    p(:,k+1) = (G_4 * p(:,k));
    x4(k) = TVdist(p(:,k+1),p(:,k));
end
semilogy(i,x4,'k');
p4 = p(:);

hold off
set(gca,'Yscale','log');
legend('alpha: 0.25','alpha: 0.50','alpha: 0.75','alpha: 1.00');

for i = 1:10
    TV_1 = TVdist(p1(:,k+1),p1(:,k));
    TV_2 = TVdist(p2(:,k+1),p2(:,k));
    TV_3 = TVdist(p3(:,k+1),p3(:,k));
    TV_4 = TVdist(p4(:,k+1),p4(:,k));
end