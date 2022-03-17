function OddOccurrencesInArray(arr) {
  var result = 0;
  for (let i = 0; i < arr.length; i++) {
    result ^= arr[i];
  }
  return result;
}
console.log(OddOccurrencesInArray([9, 3, 9, 3, 9, 7, 9]));
