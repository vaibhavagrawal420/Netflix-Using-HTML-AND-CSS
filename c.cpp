class Solution {
public:
    vector<int> findMajority(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return {};

        int c1 = 0, candidatec2 = 0, count1 = 0, count2 = 0;
        for (int num : arr) {
            if (num == c1) count1++;
            else if (num == c2) count2++;
            else if (count1 == 0) c1 = num, count1 = 1;
            else if (count2 == 0) c2 = num, count2 = 1;
            else count1--, count2--;
        }

        count1 = count2 = 0;
        for (int num : arr) {
            if (num == c1) count1++;
            else if (num == c2) count2++;
        }

        vector<int> result;
        if (count1 > n / 3) result.push_back(c1);
        if (count2 > n / 3) result.push_back(c2);

        return result;
    }
};