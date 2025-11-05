class Solution {
    // Function to merge overlapping intervals using brute force
    merge(intervals) {
        // Sort intervals by starting point
        intervals.sort((a, b) => a[0] - b[0]);

        const ans = [];
        let i = 0;
        const n = intervals.length;

        // Loop through all intervals
        while (i < n) {
            // Take current interval's start and end
            let start = intervals[i][0];
            let end = intervals[i][1];

            let j = i + 1;

            // Merge overlapping intervals
            while (j < n && intervals[j][0] <= end) {
                // Extend the end as needed
                end = Math.max(end, intervals[j][1]);
                j++;
            }

            // Push merged interval to result
            ans.push([start, end]);

            // Move to next non-overlapping interval
            i = j;
        }

        return ans;
    }
}

const sol = new Solution();
const intervals = [[1, 3], [2, 6], [8, 10], [15, 18]];
console.log(sol.merge(intervals));