class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int ele = nums[0];
        int n = nums.size();
        int count = 1;

        for (int i = 1; i < n; i++)
        {

            if (nums[i] != ele)
            {
                count--;
                if (count == 0)
                {
                    ele = nums[i];
                    count = 1;
                }
            }

            else
            {
                count++;
            }
        }

        return ele;
    }
};