def sieve_of_eratosthenes(n):
    primes = [True] * (n + 1)
    p = 2
    while p * p <= n:
        if primes[p]:
            for i in range(p * p, n + 1, p):
                primes[i] = False
        p += 1
    return [i for i in range(2, n + 1) if primes[i]]
n = int(input())
print(f"Prime numbers up to {n}:")
print(sieve_of_eratosthenes(n))
