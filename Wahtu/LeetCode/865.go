/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func subtreeWithAllDeepest(root *TreeNode) *TreeNode {
    var dfs func(*TreeNode) (int, *TreeNode)
    dfs = func(node *TreeNode) (int, *TreeNode) {
        if node == nil {
            return 0, nil
        }
        ld, ln := dfs(node.Left)
        rd, rn := dfs(node.Right)
        if ld > rd {
            return ld + 1, ln
        }
        if rd > ld {
            return rd + 1, rn
        }
        return ld + 1, node
    }
    _, res := dfs(root)
    return res
}
