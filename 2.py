def solve(n: int) -> int:
    sum = 0
    a, b = 1, 1
    while b < n:
        a, b = b, a + b
        print(b)
        if b % 2 == 0:
            sum += b

    return sum


if __name__ == "__main__":
    print(solve(10))
