class UnionFind {
    private parent: number[];//parent[i] 存储元素i的父节点
    private rank: number[];//rank[i] 存储以i为根的树的高度（秩）

    /**
     * 初始化并查集
     * @param size
     */
    constructor(size: number) {
        this.parent = Array.from({length: size}, (_, i) => i)
        this.rank = Array.from({length: size}, () => 1)
    }

    public find(x: number): number {
        if (this.parent[x] !== x) {
            this.parent[x] = this.find(this.parent[x])
        }
        return this.parent[x]
    }

    public union(x: number, y: number) {
        const rootX = this.find(x)
        const rootY = this.find(y)
        if (rootY != rootX) {
            if (this.rank[rootX] > this.rank[rootY]) {
                this.parent[rootY] = rootX
            } else if (this.rank[rootX] < this.rank[rootY]) {
                this.parent[rootX] = rootY
            } else {
                this.parent[rootX]=rootY
                this.rank[rootX]++
            }
        }
    }
    public isConnected(x:number,y:number):boolean{
        return this.find(x)==this.find(y)
    }
}
const uf=new UnionFind(10)
uf.union(1,2)
uf.union(2,3)
uf.union(4,5)

console.log(uf.isConnected(1,3))
console.log(uf.isConnected(1,4))

console.log('1111111111111')
uf.union(3,4)

console.log('2222222222222')
console.log(uf.isConnected(1,4))
