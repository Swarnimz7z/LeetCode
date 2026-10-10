class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        for(int i=0;i<asteroids.size();i++){
           if(asteroids[i]>mass)
           return false;
           if(mass>=100000)
           mass=100000;
           mass+=asteroids[i];
        }
        return true;
    }
};