class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int sz1 = nums1.size();
        int sz2 = nums2.size();
        stack<int> st;
        vector<int> nge(sz2, sz2);
        for(int i = 0;i<sz2;++i){
            while(!st.empty()&&nums2[st.top()]<nums2[i]){
                nge[st.top()] = nums2[i];
                st.pop();
            }
            st.push(i);
        }
        for(int  i=0;i<sz1; )
    }
};