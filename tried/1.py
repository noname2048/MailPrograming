mx = 0


def solve(arr: list) -> int:
    k = len(arr)
    i, j = 0, 1
    global mx
    mx = arr[0]

    _inner(arr, i, j, k)
    return mx


def _inner(arr: list, i: int, j: int, k: int) -> None:
    global mx

    if i - j == 1:
        if k != j:
            j += 1
            _inner(arr, i, j, k)
            mx = max(mx, sum(arr[i:j]))
        else:  # k == j
            mx = max(mx, sum(arr[i:j]))

    else:
        if k == j:
            i += 1
            _inner(arr, i, j, k)
            mx = max(mx, sum(arr[i:j]))
        else:
            if -arr[i] < arr[j]:
                j += 1
                mx = max(mx, sum(arr[i:j]))
            elif -arr[i] >= arr[j]:
                i += 1
                mx = max(mx, sum(arr[i:j]))


if __name__ == "__main__":
    print(solve([2, 4, -2, -3, 8]))
