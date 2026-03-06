func evalRPN(tokens []string) int {
    stack := Stack{}
    n := len(tokens)

    for i := 0; i < n; i++ {
        num, err := strconv.Atoi(tokens[i])
        if err != nil && stack.Len() >= 2 {
            secondElement, _ := stack.Pop()
            firstElement, _ := stack.Pop()

            if tokens[i] == "+" {
                stack.Push(firstElement + secondElement)
            } else if tokens[i] == "-" {
                stack.Push(firstElement - secondElement)
            } else if tokens[i] == "*" {
                stack.Push(firstElement * secondElement)
            } else {
                stack.Push(firstElement / secondElement)
            }
        } else {
            stack.Push(num)
        }
    }

    ans, _ := stack.Pop()

    return ans
}

type Stack struct {
    items []int
}

func (s *Stack) Push(item int) {
    s.items = append(s.items, item)
}

func (s *Stack) Len() int {
    return len(s.items)
}

func (s *Stack) Pop() (int, bool) {
    if len(s.items) == 0 {
        return 0, false 
    }

    topElement := s.items[len(s.items)-1]
    s.items = s.items[:len(s.items)-1]
    return topElement, true
}
