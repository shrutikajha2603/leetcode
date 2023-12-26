class Solution {
public:
    void max_heapify(vector<int> &nums, int i, int heap_size) {
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        int largest = i;

        if (left < heap_size && nums[left] > nums[largest])
            largest = left;
        if (right < heap_size && nums[right] > nums[largest])
            largest = right;
        if (largest != i) {
            swap(nums[i], nums[largest]);
            max_heapify(nums, largest, heap_size);
        }
    }

    void build_max_heap(vector<int> &nums) {
        int n = nums.size();
        for (int i = (n / 2) - 1; i >= 0; i--)
            max_heapify(nums, i, n);
    }

    void heap_sort(vector<int> &nums) {
        int n = nums.size();
        build_max_heap(nums);
        for (int i = n - 1; i > 0; i--) {
            swap(nums[0], nums[i]);
            max_heapify(nums, 0, i);
        }
    }

    vector<int> sortArray(vector<int> &nums) {
        heap_sort(nums);
        return nums;
    }
};
