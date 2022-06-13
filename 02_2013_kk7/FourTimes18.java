//18

public class FourTimes{
    private static int j = 0;

    public static boolean methodB(int k){
        j += k;
        return true;
    }
    
    public static void methodA(int i){
        boolean b;
        b = (i<10 || methodB(4)) && (i<10 || methodB(4));
    }

    static void methodC(){
        try{
            methodD();
            methodB(4);
        }catch(ArithmeticException e){
            methodB(4);
        }catch(NullPointerException e){
            methodB(4);
        }catch(Exception e){
            methodB(4);
        }finally{
            methodB(4);
        }
    }

    static void methodD(){
        throw new NullPointerException();
    }
    
    public static void main(String[] args){
        methodA(0);
        try{
            methodC();
        } catch(Exception e){
            methodA(10);
        }
        System.out.println(j);
    }
}