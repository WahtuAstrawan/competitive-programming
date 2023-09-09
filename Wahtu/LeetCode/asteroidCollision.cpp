class Solution {
public:
    vector<int> asteroidCollision(vector<int>& as) {
        stack<int> pool;
        int n = as.size();

        for(int i = 0; i < n; i++){
            bool mark = true;
            while(!pool.empty() && (pool.top() > 0 && as[i] < 0) ){
                if(abs(pool.top()) < abs(as[i])){
                    pool.pop();
                    continue;
                }else if(abs(pool.top()) == abs(as[i])){
                    pool.pop();
                }

                mark = false;
                break;
            }

            if(mark){
                pool.push(as[i]);
            }
        }

        vector<int> ans(pool.size());
        for(int i = pool.size() - 1; i >= 0; i--){
            ans[i] = pool.top();
            pool.pop();
        }

        return ans;
    }
};
