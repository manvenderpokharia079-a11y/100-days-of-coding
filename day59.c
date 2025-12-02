def max_subarray_sum(arr, k):
    if k <= 0 or k > len(arr):
        print(0)
        return
    window = sum(arr[:k])
    max_sum = window
    for i in range(k, len(arr)):
        window += arr[i] - arr[i - k]
        if window > max_sum:
            max_sum = window
    print(max_sum)

if __name__ == "__main__":
    import sys
    data = sys.stdin.read().strip().split()
    if not data:
        sys.exit()
    arr = list(map(int, data[:-1]))
    k = int(data[-1])
    max_subarray_sum(arr, k)
