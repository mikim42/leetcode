class Solution {
	public:
		int lastStoneWeight(vector<int>& stones) {
			priority_queue<int> pq(stones.begin(), stones.end());

			while (pq.size() > 1) {
				int s1 = pq.top(); pq.pop();
				int s2 = pq.top(); pq.pop();
				if (s1 - s2 > 0) pq.push(s1 - s2);
			}
			return pq.size() == 0 ? 0 : pq.top();
		}
};
