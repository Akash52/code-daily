function sumOfElements(arr) {
  var sum = 0;
  for (var i = 0; i < arr.length; i++) {
    sum += arr[i];
  }
  return sum;
}

const arr = [1, 2, 3, 4, 50, 6, 7, 8, 9, 10];
console.log(sumOfElements(arr));
