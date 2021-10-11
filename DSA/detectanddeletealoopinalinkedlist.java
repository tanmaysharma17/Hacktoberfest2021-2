int detectloop(Node head)
{
  Node slow=head;
  Node fast=head;
  while(fast!=null&&fast.next!=null)
  {
slow=slow.next;
    fast=fast.next.next;
  if(slow==fast)
  {
remove(slow,head);
    return 1;
  }
  }
    return 0;
}
void remove(Node Loop,Node head)
{
Node ptr1=Loop;
  Node ptr2=Loop;
  int k=0;
  while(ptr1.next!=ptr2)
  {
    ptr1=ptr1.next;
    k++;
  }
Node ptr1=head;
  Node ptr2=head;
  for(int i=0;i<k;i++)
  {
ptr2=ptr2.next;
  }
  while(ptr2.next!=ptr1)
  {
    ptr2=ptr2.next;
  }
  ptr2.next=null;
}

