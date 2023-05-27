/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array[]}
 */
var chunk = function(arr, size) {
  let ans = [];
  let index = 0;
  while(index < arr.length) {
    let count = size;
    const temp = [];
    while (count-- > 0 && index < arr.length) {
      temp.push(arr[index]);
      index++;
    }
    ans.push(temp);
  }
  return ans
};