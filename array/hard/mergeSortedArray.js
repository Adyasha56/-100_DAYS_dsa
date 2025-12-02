function merge(nums1, m, nums2, n) {
    let p1 = m - 1;          
    let p2 = n - 1;           
    let pos = m + n - 1;      

    // Merge from the back
    while (p1 >= 0 && p2 >= 0) {
        if (nums1[p1] > nums2[p2]) {
            nums1[pos] = nums1[p1];
            p1--;
        } else {
            nums1[pos] = nums2[p2];
            p2--;
        }
        pos--;
    }

    
    while (p2 >= 0) {
        nums1[pos] = nums2[p2];
        p2--;
        pos--;
    }
}


let nums1 = [1, 3, 5, 0, 0, 0];
let nums2 = [2, 4, 6];
let m = 3, n = 3;

merge(nums1, m, nums2, n);
console.log(nums1);  
