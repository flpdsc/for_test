//15 재귀

import java.io.*;

class Triangular
{
    public static void main(String[] args)
    {
        int value = tri(100);
        System.out.print("결과 = " + value); //5050
    }

    public static int tri(int n)
    {
        if(n==1)
            return 1;
        else
            return (n+tri(n-1));
    }
}