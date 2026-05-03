class C765 {
    public minSwapsCouples(row: number[]): number {
        const len = row.length
        const N = len / 2

    }
}

class UnionFind {
    private parent: number[];
    private count: number;

    constructor(n: number) {
        this.count = n
        this.parent = Array(n)
        for (let i = 0; i < n; i++) {
            this.parent[i] = i
        }
    }

    public find(x: number): number {
        while (this.parent[x] !== x) {
            x = this.parent[x]
        }
        return x
    }

    public union(x: number, y: number) {
        const constX = this.find(x)
        const constY: number = this.find(y)
        if (constX === constY) {
            return
        }
        this.parent[constX] = constY
        this.count--
    }

}