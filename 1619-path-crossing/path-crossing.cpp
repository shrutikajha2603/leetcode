class Solution {
public:
    bool isPathCrossing(string path) {
        int x=0;
        int y=0;

        set<pair<int, int>>visited;
        visited.insert({0,0});

        for(char c:path){
            if(c=='N')y++;
            if(c=='S')y--;
            if(c=='E')x++;
            if(c=='W') x--;

            if(visited.count({x,y})){
                return true;
            }
            visited.insert({x,y});
        }
        return false;
    }
};