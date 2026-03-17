function dailyTemperatures(temperatures: number[]): number[] {
    const n = temperatures.length
    const stack: number[] = []
    const ans: number[] = new Array(n).fill(0)

    for (let i = 0; i < n; i++) {
        while (stack.length > 0 && temperatures[i] > temperatures[stack[stack.length - 1]]) {
            const idx = stack.pop()
            ans[idx] = i - idx
        }
        stack.push(i)
    }

    return ans
};
