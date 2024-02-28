/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
 

func rec(root *TreeNode, ans *int, depth *int, cur_depth int) {
    if root == nil {
        return
    }
    if cur_depth > *depth {
        *ans = root.Val
        *depth = cur_depth
    }
    rec(root.Left, ans, depth, cur_depth + 1)
    rec(root.Right, ans, depth, cur_depth + 1)
}

func findBottomLeftValue(root *TreeNode) int {
    ans, depth := -1, 0
    rec(root, &ans, &depth, 1)
    return ans
}
