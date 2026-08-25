class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> x;
        for(int i=0;i<asteroids.size();i++){
            if(x.empty()) x.push(asteroids[i]);
            else { 
                int j=1;
                while(!x.empty()){
                    if(x.top() > 0 && asteroids[i] < 0){
                        if(abs(x.top()) == abs(asteroids[i])){
                            x.pop();
                            j=0;
                        }
                        else if(abs(x.top()) < abs(asteroids[i])) x.pop();
                        else if(abs(x.top()) > abs(asteroids[i])) j=0;
                    }
                    else break;
                    if(j==0) break;
                }
                if(j) x.push(asteroids[i]);
            }
        }
        vector<int> y;
        while(!x.empty()){
            y.push_back(x.top());
            x.pop();
        }
        reverse(y.begin(),y.end());
        return y;
    }
};