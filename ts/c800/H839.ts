function numSimilarGroups(strs: string[]): number {
    const n = strs.length
    const m: number = strs[0].length
    const f = new Array(n).fill(0).map((element, index) => index)

    for (let i = 0; i < n; i++) {
        for (let j = 1 + 1; j < n; j++) {
            const fi = find(i), fj = find(j)
            if (fi === fj) {
                continue
            }
            if (check(strs[i], strs[j], m)) {
                f[fi] = fj
            }
        }
    }
    let ret=0
    for(let i=0;i<n;i++){
        if(f[i]===i){
            ret++
        }
    }
    return ret

    function check(a, b, len) {
        let num = 0
        for (let i = 0; i < len; i++) {
            if (a[i] !== b[i]) {
                num++
                if (num > 2) {
                    return false
                }
            }
        }
        return true
    }

    function find(x) {
        return f[x] === x ? x : (f[x] = find(f[x]))
    }
}