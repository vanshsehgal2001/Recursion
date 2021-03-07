#include<bits/stdc++.h>
class Solution {
public:
    
    static bool helper(vector<double>& arr){
        int n=arr.size();
        
        if(n==1){
            if(abs(arr[0]-24)<0.001){
                return true;
            }
            return false;
        }
        
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                double num1=arr[i];
                double num2=arr[j];
                
                vector<double> vals;
                vals.push_back(num1+num2);
                vals.push_back(num1-num2);
                vals.push_back(num2-num1);
                vals.push_back(num1*num2);
                
                if(num1){
                    vals.push_back((num2*1.0)/num1);
                }
                if(num2){
                    vals.push_back((num1*1.0)/num2);
                }
                
                vector<double> newArr(n-1);
                int ind=0;
                for(int k=0;k<n;k++){
                    if(k!=i && k!=j){
                        newArr[ind++]=arr[k];
                    }
                }
                
                for(int k=0;k<vals.size();k++){
                    newArr[newArr.size()-1]=vals[k];
                    if(helper(newArr)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
    
    bool judgePoint24(vector<int>& nums) {
        vector<double> arr;
        for(int i=0;i<nums.size();i++){
            arr.push_back((nums[i]*1.0));
        }
        return helper(arr);
    }
};
