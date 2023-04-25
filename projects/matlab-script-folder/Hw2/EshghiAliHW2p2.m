%Creating an array of the elements we want to test
vct = (10:9999);

% Empty array to keep track of the weird numbers
weird;
i = 1;

%Going over every element inside the interval
for c = 1:9990
    facts = divisors(vct(c));
    sums = sum(facts) - vct(c);

    %Checking if the sum of divisors are bigger than the number
    if sums > vct(c)

        %Going over the sub intervals
        for z = 1:(length(facts)-1)
            sub = nchoosek(facts, z);
            subSum = sum(sub,2);

            %Checking if the sum of the sub sets gets to number
            for x = 1:length(subSum)
                if subSum(x) == vct(c)
                    weird(i) = vct(c);

                end
            end
        end
    end
end