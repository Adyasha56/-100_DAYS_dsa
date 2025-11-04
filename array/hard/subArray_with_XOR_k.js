function subArraywithXORk(arr , k)
{
    const n = arr.length;
    let count = 0;

    for(let i =0;i<n;i++)
    {
        for(let j = i;j<n;j++){
            let xorr = 0;
            for (let K = i; K <= j; K++)
             {
                xorr = xorr ^ arr[K];
            }
            if(xorr == k)
            {
                count++;
            }
        }
    }
    return count;
}

let arr = [4, 2, 2, 6, 4, 8, 2, 1, 4, 6];
let k = 6;

console.log(subArraywithXORk(arr , k));
