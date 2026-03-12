function exclusiveTime(n: number, logs: string[]): number[] {
    const result = new Array(n).fill(0)
    const stack: number[] = []

    let prevTime = 0

    for (const log of logs) {
        const [idStr, type, timeStr] = log.split(":")
        const id = Number(idStr)
        const time = Number(timeStr)

        if (type === "start") {
            if (stack.length > 0) {
                result[stack[stack.length - 1]] += time - prevTime
            }

            stack.push(id)
            prevTime = time
        } else {
            const finish = stack.pop()
            result[finish] += time - prevTime + 1

            prevTime = time + 1
        }
    }

    return result
};
