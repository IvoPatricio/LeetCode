class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        std::unordered_set<int> centerSet;
        for (int i = 0; i < edges.size(); i++)
        {
            if (centerSet.count(edges[i][0]) == 0)
                centerSet.insert(edges[i][0]);
            else
                return edges[i][0];
            if (centerSet.count(edges[i][1]) == 0)
                centerSet.insert(edges[i][1]);
            else
                return edges[i][i];
        }
        return 0;
    }
};