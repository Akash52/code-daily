// Search in a row wise and column wise sorted matrix

function searchMat(mat, n, x) {
  if (n === 0) return -1;
  for (let i = 0; i < n; i++)
    for (let j = 0; j < n; j++) {
      if (mat[i][j] === x) {
        console.log("Element Found at", i, j);
      }
    }
}

let mat = [
  [10, 20, 30, 40],
  [15, 25, 35, 45],
  [27, 29, 37, 48],
  [32, 33, 39, 50],
];

searchMat(mat, 4, 10);

// 1.Run a nested loop, outer loop for row and inner loop for the column
// 2.Check every element with x and if the element is found then print “element found”
// 3.If the element is not found, then print “element not found”.
