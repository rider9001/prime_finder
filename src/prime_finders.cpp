#include "../inc/prime_finders.h"

///--------------------------------------------------------
size_t find_primes_naive(size_t limit)
{
    // 2 is prime, 1 not counted
    size_t prime_count = 1;

    for (size_t i = 3; i < limit; i++)
    {
        prime_count++;
        for (size_t j = 2; j < (i/2)+1; j++)
        {
            if (i % j == 0)
            {
                prime_count--;
                break;
            }
        }
    }

    return prime_count;
}

///--------------------------------------------------------
size_t find_primes_naive_odds(size_t limit)
{
    // 2 is prime, 1 not counted
    size_t prime_count = 1;

    for (size_t i = 3; i < limit; i+=2)
    {
        prime_count++;
        for (size_t j = 2; j < (i/2)+1; j++)
        {
            if (i % j == 0)
            {
                prime_count--;
                break;
            }
        }
    }

    return prime_count;
}

///--------------------------------------------------------
size_t sieve_of_eratosthenes(size_t limit)
{
    // list representing numbers from 2 to limit-1
    // 0,1 not removed due to negligable impact and clairty of code
    // subtract 2 to remove from final count
    std::vector<size_t> values(limit, 1);

    for (size_t i = 2; i < limit; i++)
    {
        // if number already exculded from primes, skip
        if (!values.at(i)) continue;

        size_t mul = 2;
        while (mul * i < limit)
        {
            values.at(mul * i) = 0;
            mul++;
        }
    }

    // sum number of 1s in list
    size_t sum = 0;
    for (size_t num : values)
    {
        sum += num;
    }

    return sum - 2;
}

///--------------------------------------------------------
size_t segmented_sieve(size_t limit)
{

}