class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        vector<int> stones = {a, b, c};
        sort(stones.begin(), stones.end());
        int x = stones[0], y = stones[1], z = stones[2];
        
        if (z - x == 2) return {0, 0};
        
        int minMoves = (y - x <= 2 || z - y <= 2) ? 1 : 2;
        int maxMoves = z - x - 2;
        
        return {minMoves, maxMoves};
    }
};
