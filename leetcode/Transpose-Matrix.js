let transpose = function (matrix) {
    const transposed = [];
    for (i in matrix[0]) {
        const x = []
        for (j in matrix) {
            x.push(matrix[j][i])
        }
        transposed.push(x)
    }
    return transposed
};


console.log(transpose([[1, 2, 3], [4, 5, 6], [7, 8, 9]]))
console.log(transpose([[1, 2, 3], [4, 5, 6]]))