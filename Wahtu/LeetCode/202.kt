class Solution {
    fun isHappy(n: Int): Boolean {
        var slow = n
        var fast = n

        do {
            slow = square(slow)
            fast = square(square(fast))
        } while (slow != fast)

        return slow == 1
    }

    fun square(num: Int): Int {
        var ans = 0
        var nums = num

        while(nums > 0) {
            var remainder = nums % 10
            ans += remainder * remainder
            nums /= 10
        }

        return ans
    }
}
