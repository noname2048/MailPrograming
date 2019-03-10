def solve(arr: list) -> int:
    current_max = arr[0]
    max_sum = current_max

    for i in range(1, len(arr)):
        current_max = max((current_max + arr[i], arr[i]))
        max_sum = max((max_sum, current_max))

    return max_sum


if __name__ == "__main__":
    print(solve([4, -5, 2, 2, 2]))
    print(solve([2, 4, -2, -3, 8]))
