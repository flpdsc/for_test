//16 배열 numbers의 모든 원소들을 출력하기 위한 for문 조건
// 1) int s=0; s<numbers.length; s++    => 0 1 2
// 2) int s=numbers.length; s>0; s--    => 3 2 1
// 3) String s: numbers                 => first second third
// 4) String s: numbers[]               => error

public class SaTest 
{
    public static void main(String args[])
    {
        String numbers[] = {"first", "second", "third"};
        for(String s: numbers) //알맞은 조건? 
            System.out.println(s);
    }
    
}
