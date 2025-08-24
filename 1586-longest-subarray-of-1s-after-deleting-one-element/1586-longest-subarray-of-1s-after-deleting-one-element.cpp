class Solution {
public:

    // int n;

    // int FIND( vector<int>& nums, int index ) {

    //     int count = 0;
    //     int m = 0;

    //     for ( int i = 0 ; i < n ; i++ ) {

    //         if ( i == index )
    //             continue;
    //         else if ( nums[i] == 1 ){
    //             count++;
    //             m = max(m,count);
    //         }
    //         else{
    //             count = 0;
    //         }
    //     }
    //     return m;
    // }

    int longestSubarray(vector<int>& nums) {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        // n = nums.size();
        // int ans = 0;
        // bool flag = false;

        // if ( count(nums.begin(), nums.end(), 0) == n ) 
        //     return 0;

        // for ( int i = 0 ; i < nums.size(); i++) {

        //     if ( nums[i] == 0) {

        //         flag = true;
        //         ans = max(ans, FIND(nums,i));
        //     }
        // }

        // if (flag == false )
        //     return n-1;
        
        // return ans;



        // Sliding Window Approch

        int z = 0, m = 0, j = 0;

        for ( int i = 0 ; i < nums.size() ; i++ ) {

            if ( nums[i] == 0 ) z++;

            while( z > 1 ) {
                if ( nums[j] == 0 )
                    z--;
                j++;
            }
            m = max(m, i-j );
        }

        return m;
    }
};