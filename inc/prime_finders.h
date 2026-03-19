/// ------------------------------------------
/// @file prime_finders_c.h
///
/// @brief header file for prime finder functions in C
/// ------------------------------------------
#pragma once

#include <math.h>
#include <stddef.h>
#include <vector>
#include <string.h>
#include <iostream>

///--------------------------------------------------------
/// @brief Naive algorithm to find primes
///
/// @param limit find primes below this number
///
/// @return number of primes below given input
size_t find_primes_naive(size_t limit);

///--------------------------------------------------------
/// @brief Naive algorithm, modified to only test odd numbers
///
/// @param limit find primes below this number
///
/// @return number of primes below given input
size_t find_primes_naive_odds(size_t limit);

///--------------------------------------------------------
/// @brief Uses prime sieve method
///
/// @param limit find primes below this number
///
/// @return number of primes below given input
size_t sieve_of_eratosthenes(size_t limit);

///--------------------------------------------------------
/// @brief Uses alternative sieve method
///
/// @param limit find primes below this number
///
/// @return number of primes below given input
size_t sieve_of_sundaram(size_t limit);