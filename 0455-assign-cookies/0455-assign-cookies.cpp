class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());

        int m = s.size();
        int n = g.size();

        int i =0; 
        int j =0;
        
        while(i<n && j<m){
            if(g[i] <= s[j]){
                i++;
            }
            j++;
        }
        return i;
    }
};