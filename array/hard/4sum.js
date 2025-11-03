function fourSum( nums , target){
    let n = nums.length;
    let set = new Set();

    for( let i =0; i < n; i++){
        for(let j =i+1; j<n; j++){
            for(let k = j+1; k<n; k++){
                for(let l = k+1; l<n; l++){
                    let sum = nums[i] + nums[j] + nums[k] + nums[l];

                        if(sum === target){
                            let temp = [nums[i], nums[j], nums[k], nums[l]];
                             temp.sort((a,b) => a-b);
                             set.add(temp.toString());
                    }
                }
            }
        }
    }
let result = Array.from(set);
return result;
}


let nums = [4, 3, 3, 4, 4, 2, 1, 2, 1, 1];
let target = 9;

let ans = fourSum(nums, target);
console.log("the quads are : ");
for(let quad of ans){
    console.log(quad);
}

