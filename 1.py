def solve(arr: list) -> int:
    currentMax = arr[0]
    maxSum = currentMax

    for i in range(1, len(arr)):
        currentMax = max((currentMax + arr[i], arr[i]))
        maxSum = max((maxSum, currentMax))

    return maxSum


if __name__ == "__main__":
    print(solve([4, -5, 2, 2, 2]))
