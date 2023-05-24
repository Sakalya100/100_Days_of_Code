class Solution
{
public:
    static bool it(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
    }
    long long maxScore(vector<int> &nums1, vector<int> &nums2, int k)
    {
        vector<pair<int, int>> vec;
        int n = nums1.size();
        for (int i = 0; i < n; i++)
            vec.push_back({nums1[i], nums2[i]});
        sort(vec.begin(), vec.end(), it);
        long long totalSum = 0;
        long long result = 0;
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < k - 1; i++)
        {
            pq.push(vec[i].first);
            totalSum += vec[i].first;
        }
        for (int i = k - 1; i < n; i++)
        {
            result = max(result, (long long)((totalSum + vec[i].first) * vec[i].second));
            pq.push(vec[i].first);
            totalSum += vec[i].first;
            if (pq.size() == k)
            {
                totalSum -= pq.top();
                pq.pop();
            }
        }
        return result;
    }
};
