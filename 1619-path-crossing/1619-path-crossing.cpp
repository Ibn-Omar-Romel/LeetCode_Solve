class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>> points;
        points.insert({0, 0});

        int x = 0, y = 0;
        for (int i = 0; i < path.size(); i++) {
            if (path[i] == 'E')
                x++;
            else if (path[i] == 'W')
                x--;
            else if (path[i] == 'N')
                y++;
            else 
                y--;
            
            if (points.count({x,y}))
                return true;

            points.insert({x,y});
        }
        return false;
        
    }
};