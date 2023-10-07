void rotate(int* nums, int numsSize, int k){
int n = numsSize;
        k = k % n; // Handle cases where k is greater than n

        if (k == 0) return;

        int count = 0;

        for (int start = 0; count < n; start++) {
            int current = start;
            int prev = nums[start];

            do {
                int next = (current + k) % n;
                int temp = nums[next];
                nums[next] = prev;
                prev = temp;
                current = next;
                count++;
            } while (start != current);
        }
}