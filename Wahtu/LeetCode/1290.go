/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */

func getDecimalValue(head *ListNode) int {
    var bin string = "";

    for head != nil {
        bin += strconv.Itoa(head.Val)
        head = head.Next
    }

    num, _ := strconv.ParseInt(bin, 2, 64)
    res := int(num)

    return res;
}
