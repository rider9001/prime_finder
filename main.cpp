/// ------------------------------------------
/// @file main.cpp
///
/// @brief Main starting point for Matrix testing
/// ------------------------------------------

#include <iostream>
#include <time.h>
#include <chrono>

#include "inc/prime_finders_c.h"

using std::cout;
using std::endl;


class Timer
{
private:
	// Type aliases to make accessing nested type easier
	using Clock = std::chrono::steady_clock;
	using Second = std::chrono::duration<double, std::ratio<1> >;

	std::chrono::time_point<Clock> m_beg { Clock::now() };

public:
	void reset()
	{
		m_beg = Clock::now();
	}

	double elapsed() const
	{
		return std::chrono::duration_cast<Second>(Clock::now() - m_beg).count();
	}
};

int main()
{
    const size_t primes_lim = 1e5;
    Timer t;

    cout << "Naive approach: ";
    t.reset();
    cout << find_primes_naive(primes_lim) << " primes below " << primes_lim << endl;

    cout << t.elapsed() * 1e6 << " micros" << endl;

    return EXIT_SUCCESS;
}