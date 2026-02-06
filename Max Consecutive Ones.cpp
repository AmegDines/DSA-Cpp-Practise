class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int temp = 1;
        int count = 0;
        int  con = 0; 

        for(int num: nums){
            
            if(temp == num){
                count++;
                if(con<=count){
                    con = count;
                }
            }
            else{
                count = 0;
            }
        }

        return con;
        
    }
}