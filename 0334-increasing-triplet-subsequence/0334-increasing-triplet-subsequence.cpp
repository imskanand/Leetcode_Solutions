class Solution {
public:
    static bool increasingTriplet(const vector<int> &nums){
     int a= INT_MAX,b=INT_MAX;
      for(int i: nums){
        if(a>=i) a=i;
        else if(b>=i) b=i;
        else return true;
      }
      return false;
    }
};