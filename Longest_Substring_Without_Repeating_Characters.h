class Solution
{
public:
	int lengthOfLongestSubstring(string s)

	{
		int n = s.length();
		int ans = 0;
		unordered_map<int, int> str_map;

		for (int j = 0, i = 0; j < n; j++)
		{
			if (str_map.count(s.at(j))) i = std::max(i, str_map.at(s.at(j)));
			ans = std::max(ans, j - i + 1);
			str_map[s.at(j)] = j + 1;

		}
		return ans;
	}
};