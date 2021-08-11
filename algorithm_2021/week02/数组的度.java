class Solution {
    public int findShortestSubArray2(int[] nums) {
        int max = 0;
        Map<Integer, Integer> map = new HashMap();
        for (int i = 0; i < nums.length; i++) {
            map.put(nums[i], map.getOrDefault(nums[i], 0) + 1);
            max = Math.max(max, map.get(nums[i]));
        }
        
        int left = 0;
        int right = 0;
        int min = Integer.MAX_VALUE;
        Map<Integer, Integer> subMap = new HashMap();
        while (right < nums.length) {
            subMap.put(nums[right], subMap.getOrDefault(nums[right], 0) + 1);
            while (subMap.get(nums[right]).equals(max)) {
                subMap.put(nums[left], subMap.getOrDefault(nums[left], 0) - 1);
                min = Math.min(min, right - left + 1);
                left++;
            }          
            right++;
        }

        return min;
    }

    public int findShortestSubArray(int[] nums) {
        int max = 0;
        Map<Integer, int[]> map = new HashMap();
        for (int i = 0; i < nums.length; i++) {
            if (map.containsKey(nums[i])) {
                int [] arr = map.get(nums[i]);
                arr[0] += 1;
                arr[2] = i;
                map.put(nums[i], arr);
                max = Math.max(max, arr[0]);
            } else {
                map.put(nums[i], new int[] {1, i, i});
                max = Math.max(max, 1);
            }
        }
        
        int min = Integer.MAX_VALUE;
        for (Map.Entry<Integer, int[]> entry : map.entrySet()) {
            int [] arr = entry.getValue();
            if (arr[0] == max) {
               min = Math.min(min, arr[2] - arr[1] + 1);
            }
        }
        return min;
    }
}