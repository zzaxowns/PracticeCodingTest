class Solution {
public:
	int trap(vector<int>& height) {
		int answer = 0;
		int len = height.size();

		for (int i = 0; i < len; i++) {
			int left_Max = *max_element(height.begin(), height.begin() + i);
			int right_Max = *max_element(height.begin() + i, height.end());

			int h = left_Max > right_Max ? right_Max : left_Max;
			answer += h - height[i] > 0 ? h - height[i] : 0;
		}

		return answer;
	}
};