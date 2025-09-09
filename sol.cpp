class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
          // using the brute force solution.


     unordered_map<int,bool>mp;
     for(auto & p:arr){
        mp[p] = true;
     }


     int count = 0;
     int num;
     int i = 1;
     while(true){
     
      if(mp[i]){
        // i++;
      }
      else{
        count++;
        if(count == k) return i;

      }
       
       i++;

     }
     
  return -1;

    }
};