class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minnum = INT_MAX;//声明最小数赋值为INT_MAX
        int left = 0;//左边界
        int right = 0;//右边界
        int num = nums[left];//对于元素和初始化为左边界数
        bool flag = false;//是否有最小元素和的标志，若最终为false，则说明全部加起来也达不到target
        while(right < nums.size()&& left <= right)
        {
            while(num >= target && left <= right)//当窗口内元素和大于target时
            {
                flag = true;
                minnum = min(right - left + 1,minnum);//求出当前长度并于最小长度比较
                num -= nums[left];//缩小元素和
                left++;//缩小左边界
            }
                right++;//运行到这里说明当前元素和小于target，那么扩展有边界
                if(right< nums.size())num += nums[right];//if语句防止right越界
        }
        if(flag == true)return minnum;
        else return 0;
        
    }
};
