class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
      int n = people.size();
// Sorting the vector in asc order
      sort(people.begin(),people.end());
// Creating a vector of length same as people with value of -1 in place      
      vector<vector<int>> ans(n,vector<int>(2,-1));
      
      for(int i=0;i<n;i++){
        int count = people[i][1];
        for(int j=0;j<n;j++){
// Checking the position is still empty for the people
          if(ans[j][0]==-1 && count ==0){
            ans[j][0]=people[i][0];
            ans[j][1]=people[i][1];
            break;
          }else if(ans[j][0]==-1 || ans[j][0]>=people[i][0]){
            count--;
          }
        }
      }
      return ans;
    }
};