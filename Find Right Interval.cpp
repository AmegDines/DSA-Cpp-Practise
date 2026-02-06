vector<int> findRightInterval(vector<vector<int>>& intervals) {
    int n = intervals.size();
    vector<pair<int,int>> starts;
    for (int i = 0; i < n; i++) starts.push_back({intervals[i][0], i});
    sort(starts.begin(), starts.end());
    vector<int> res(n, -1);
    for (int i = 0; i < n; i++) {
        int e = intervals[i][1];
        int l = 0, r = n - 1, ans = -1;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (starts[m].first >= e) {
                ans = starts[m].second;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        res[i] = ans;
    }
    return res;
}
