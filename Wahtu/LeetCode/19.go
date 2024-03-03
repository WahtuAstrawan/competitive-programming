/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */

func removeNthFromEnd(head *ListNode, n int) *ListNode {
    
    dummyHead := &ListNode{-1, head}
    
    cur, prevOfRemoval := dummyHead, dummyHead
    
    for cur.Next != nil{
        
        if n <= 0 {
            prevOfRemoval = prevOfRemoval.Next
        }
        
        cur = cur.Next
        
        n -= 1
    }
    
    nthNode := prevOfRemoval.Next
    prevOfRemoval.Next = nthNode.Next
    
    return dummyHead.Next
    
}
