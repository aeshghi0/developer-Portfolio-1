%applying bisection method. default iterations: 100
function c = bisection(f, a, b, tol)
    iter = 0;
    max_iter = 100;

    while(iter <= max_iter) && (abs(b-a)/2 > tol)
        c = (a + b)/2;

        if(f(a) * f(c)) > 0
            a = c;
        else
            b = c;
        end

        iter = iter + 1;
    end
end