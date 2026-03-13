#include "../inc/prime_finders_c.h"

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