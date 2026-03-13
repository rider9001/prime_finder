/// ------------------------------------------
/// @file prime_finders_c.h
///
/// @brief header file for prime finder functions in C
/// ------------------------------------------
#pragma once

#include <math.h>
#include <stddef.h>

///--------------------------------------------------------
/// @brief Naive attempt to find primes
///
/// @return number of primes below given input
size_t find_primes_naive(size_t limit);