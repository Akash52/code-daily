function arrayRotation(arr, n) {
  let result = [];
  for (let i = 0; i < arr.length; i++) {
    let index = (i + n) % arr.length;
    result[index] = arr[i];
  }
  return result;
}

console.log(arrayRotation([1, 2, 3, 4, 5, 6, 7, 8, 9, 10], 3));
