class Solution {
public:
  static bool compare(vector<int> a,vector<int> b){
        return a[1]>b[1];
      }
  
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
      int units= 0;
      sort(boxTypes.begin(),boxTypes.end(),compare);
      for(int i=0;i<boxTypes.size();i++){
        if(truckSize>= boxTypes[i][0]){
          units+=boxTypes[i][0]*boxTypes[i][1];
          truckSize-=boxTypes[i][0];
        }else{
          units+=truckSize*boxTypes[i][1];
          break;
        }
      }
      return units;
    }
};