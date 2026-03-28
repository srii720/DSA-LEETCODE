class Solution {
    public int findNumbers(int[] nums) {
        int count =0;
        for(int num:nums){
            int digit=0;
            int x =num;
            while(x>0){
                x/=10;
                digit++;
            }
            if(digit%2==0){
                count++;
            }


        }return count;


    }
}