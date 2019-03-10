import types


def solve(n: int) -> int:
    arr = [0, 1]
    while arr[-1] < n:
        arr.append(arr[-1] + arr[-2])
    print(arr)
    return sum([x for x in arr if x % 2 == 0])


if __name__ == "__main__":
    print(solve(10))
