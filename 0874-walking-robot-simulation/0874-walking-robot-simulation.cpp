class Solution {
public:
    static const int HASH_MULTILIER = 60001;
    int hashCoordinates(int x, int y) { return x + HASH_MULTILIER * y; }
    // calculate Euclidean Distance
    int euclideanDistance(int x, int y) { return (x * x) + (y * y); }

    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        // store obstacles in an unordered_set for efficient lookup
        unordered_set<int> obstacleSet;
        for (auto& obstacle : obstacles) {
            obstacleSet.insert(hashCoordinates(obstacle[0], obstacle[1]));
        }

      // Define direction vectors: North, East, South, West
        vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

        vector<int> currentPosition = {0, 0};
        int maxDistSquared = 0;
         int currentDirection = 0;  // 0: North, 1: East, 2: South, 3: West

        for (int command : commands) {
            if (command == -1) {
                // Turn right
                currentDirection = (currentDirection + 1) % 4;
                continue;
            }
            if (command == -2) {
                // Turn left
                currentDirection = (currentDirection + 3) % 4;
                continue;
            }

            // Move forward
            vector<int> direction = directions[currentDirection];
            for (int step = 0; step < command; step++) {
                int nextX = currentPosition[0] + direction[0];
                int nextY = currentPosition[1] + direction[1];
                if (obstacleSet.contains(hashCoordinates(nextX, nextY))) {
                    break;
                }
                currentPosition[0] = nextX;
                currentPosition[1] = nextY;
            }

            maxDistSquared =
                max(maxDistSquared,
                    euclideanDistance(currentPosition[0], currentPosition[1]));
        }
        return maxDistSquared;
    }
};