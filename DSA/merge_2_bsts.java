class Solution
{
    Queue<Integer> q;
    Solution()
    {
        q = new LinkedList<>();
    }
    
    public void inorder(Node root)
    {
        if(root!=null)
        {
            inorder(root.left);
            q.add(root.data);
            inorder(root.right);
        }
    }

    public List<Integer> merge(Node root1,Node root2)
    {
        ArrayList<Integer> arr = new ArrayList<>();
        Solution t1 = new Solution();
        Solution t2 = new Solution();
        t1.inorder(root1);
        t2.inorder(root2);
        while(!t1.q.isEmpty() && !t2.q.isEmpty())
        {
            if(t1.q.peek()<t2.q.peek())
            {
                arr.add(t1.q.remove());
            }
            else
            {
                arr.add(t2.q.remove());
            }
        }
        while(!t1.q.isEmpty())
            arr.add(t1.q.remove());
        while(!t2.q.isEmpty())
            arr.add(t2.q.remove());
            
        return arr;
    }
}
