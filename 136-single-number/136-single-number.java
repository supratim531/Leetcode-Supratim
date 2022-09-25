class Solution {
    public int singleNumber(int[] nums) {
        int ans = 0, N = 100000;

        int[] hsh = new int[N];
        Integer[] nums2 = new Integer[nums.length];

        for (int i = 0; i < nums.length; ++i)
            nums2[i] = nums[i];

        int least = Collections.min(Arrays.asList(nums2));
        least = (least < 0) ? least * -1 : least;

        for (int ele : nums2)
            hsh[ele + least] += 1;

        for (int ele : nums2) {
            if (hsh[ele + least] == 1) {
                ans = ele;
                break;
            }
        }

        return ans;
    }
}