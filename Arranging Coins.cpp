int arrangeCoins(int n) {
    long long l = 0, r = n;
    while (l <= r) {
        long long m = l + (r - l) / 2;
        long long s = m * (m + 1) / 2;
        if (s == n) return m;
        if (s < n) l = m + 1;
        else r = m - 1;
    }
    return r;
}
