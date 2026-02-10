int closestSum(vector<int>& arr, int target){
    int left = 0;
    int right = arr.size()-1;
    int closest  = arr[left]+arr[right];
    while(left<right){
        int currsum  = arr[left]+arr[right];
        if(abs(target - currsum)<abs(target - closest)){
            closest = currsum;
        }
        if(currsum<target){
            left++;
        }
        else{
            right++;
        }
    }
}