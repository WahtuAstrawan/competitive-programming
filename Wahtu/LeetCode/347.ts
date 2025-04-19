function topKFrequent(nums: number[], k: number): number[] {
    const map = new Map<number, number>();

    for (const num of nums){
        if (!map.has(num)) {
            map.set(num, 0);
        }
        map.set(num, map.get(num)! + 1);
    }

    return Array.from(map.entries())
        .sort((a, b) => b[1] - a[1])
        .slice(0, k)
        .map(([key, _]) => key);
};
