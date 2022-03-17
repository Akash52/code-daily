function laregst(arr) {
  var max = arr[0];
  for (var i = 0; i < arr.length; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

const arr = [1, 2, 3, 4, 50, 6, 7, 8, 9, 10];
console.log(laregst(arr));
