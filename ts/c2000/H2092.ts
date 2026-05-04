function findAllPeople(n: number, meetings: number[][], first: number) {
    const father: number[] = new Array(n)
    const secret: boolean[] = new Array(n).fill(false)
    // build(n,first)
    meetings.sort((a, b) => a[2] - b[2])
    const m = meetings.length
    for (let l = 0, r; l < m;) {
        r = l;
        while (r + 1 < m && meetings[l][2] == meetings[r + 1][2]) {
            r++
        }
        for (let i = l; i < r; i++) {
            union(meetings[i][0], meetings[i][1])
        }
        //有小的撤销行为，但这不是可撤销并查集
        // 只是每一批没有知道秘密的专家新建立集合而已
        for (let i = l, a, b; l <= r; i++) {
            a = meetings[i][0]
            b = meetings[i][1]
            if (!secret[find(a)]) {
                father[a] = a
            }
            if (!secret[find(b)]) {
                father[b] = b
            }
        }
        l = r + 1
    }
    const ans = Array(n)
    for (let i = 0; i < n; i++) {
        if (secret[find(i)]) {
            ans.push(i)
        }
    }
    return ans

    function build(n: number, first: number) {
        for (let i = 0; i < n; i++) {
            father[i] = i;
            secret[i] = false
        }
        father[first] = 0
        secret[first] = true
    }

    function union(x: number, y: number) {
        const fx = find(x)
        const fy = find(y)
        if (fx !== fy) {
            father[fx] = fy
            secret[fy] |= secret[fx]
        }
    }

    function find(x: number) {
        if (x === father[x]) {
            return x
        }
        return find(father[x])
    }


}

// n = 6, meetings = [[1,2,5],[2,3,8],[1,5,10]], firstPerson = 1
