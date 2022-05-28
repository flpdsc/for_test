//14 LinkedList

import java.util.*;
class ListTest
{
    public static void main(String args[])
    {
        LinkedList<Integer> myLL = new LinkedList<Integer>();

        myLL.addFirst(new Integer(10));
        myLL.addFirst(new Integer(20));
        myLL.addFirst(new Integer(30));
        while(!myLL.isEmpty())
        {
            Integer num = myLL.removeFirst();
            System.out.printf("%d ", num); //30 20 10
        }
    }
}