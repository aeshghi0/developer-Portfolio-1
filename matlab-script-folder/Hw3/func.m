function f = func()

    %driven from the given formula
    f = @(x) (-x.^5 + 25.*x.^4 - 200.*x.^3 + 600.*x.^2 - 600.*x + 120)/factorial(5);
end