bool increasing = true;  // Assume it's increasing initially
        bool decreasing = true;  // Assume it's decreasing initially
        
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[i - 1]) {
                decreasing = false;  // If we find an increasing pair, it's not decreasing
            } else if (nums[i] < nums[i - 1]) {
                increasing = false;  // If we find a decreasing pair, it's not increasing
            }
        }
        
        // If either increasing or decreasing is true, the array is monotonic
        return increasing || decreasing;
    }