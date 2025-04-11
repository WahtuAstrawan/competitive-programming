function twoSum(nums: number[], target: number): number[] {
    interface Pair<T, U> {
        first: T;
        second: U;
    }

    const pairs: Pair<number, number>[] = nums.map((value, index) => ({
        first: index,
        second: value
    }));

    pairs.sort((a, b) => a.second - b.second);

    let left = 0
    let right = pairs.length - 1

    while(left < right){
        const twoSum = pairs[left].second + pairs[right].second
        if(twoSum === target){
            return [pairs[left].first, pairs[right].first]
        }else if(twoSum < target){
            left++
        }else {
            right--
        }
    }
    
    return [0,0]
};
