//12 Exception

public class ExceptionTest
{
    public static void main(String args[])
    {
        try
        {
            System.out.println("문장 A"); //1
            foo();
            System.out.println("문장 B");
        }
        catch(Exception e)
        {
            System.out.println("문장 C"); //5
        }
        System.out.println("문장 D"); //6
    }

    public static void foo() throws Exception
    {
        try
        {
            System.out.println("문장 E"); //2
            throw new Exception();
        }
        catch(Exception e)
        {
            System.out.println("문장 F"); //3
            throw e;
        }
        finally
        {
            System.out.println("문장 G"); //4
        }
    }
}