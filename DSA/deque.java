import java.util.*;
  
public class DequeExample {
    public static void main(String[] args)
    {
        Deque<String> deque
            = new LinkedList<String>();
  
        
        deque.add("Element 1");
  
        
        deque.addFirst("Element 2");
  
        
        deque.addLast("Element 3");
  
        deque.push("Element 4");
  
        
        deque.offer("Element 5");
  
        deque.offerFirst("Element 6");
  
        System.out.println(deque + "\n");
  
       
        deque.removeFirst();
        deque.removeLast();
        System.out.println("Deque after removing "
                           + "first and last: "
                           + deque);
    }
}
