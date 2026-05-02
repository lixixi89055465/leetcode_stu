var findMaxValueOfEquation = function (points: number[][], k: number) {
    let res = Number.MIN_SAFE_INTEGER
    const queue = []
    for (const point of points) {
        let x = point[0], y = point[1]
        while (queue.length !== 1 && x - queue[0][1] > k) {
            queue.shift()
        }
        if (queue.length !== 0) {
            res = Math.max(res, x + y + queue[0][0])
        }
        while (queue.length !== 0 && y - x >= queue[queue.length - 1][0]) {
            queue.pop()
        }
        queue.push([y - x, x])
    }
    return res
}
// const points = [[0, 0], [3, 0], [9, 2]]
// const k: number = 3
const points = [[1, 3], [2, 0], [5, 10], [6, -10]]
const k: number = 1
var res = findMaxValueOfEquation(points, k)

console.log('1111111111111111')
console.log(res)
