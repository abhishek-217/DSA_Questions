/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    let n = arr.length;
    let res = new Array();

    for(let i=0; i<n; i++){
        res.push(fn(arr[i],i));
    }

    return res;
};