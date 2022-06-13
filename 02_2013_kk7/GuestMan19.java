//19
//1. 출력결과 "Susan Mary " (O)
//2. 범용적인 Vector 클래스를 직접 사용하는 대신 GuestList를 정의하여 특별한 용도를 나타내고 있음 (O)
//3. 컨테이너 객체 guests에 저장될 수 있는 Guest 객체 수는 미리 정해져있지 않음 (O)
//4. 컨테이너 객체 guests는 매개변수적 다형리스트(parametic polymorphic list)로 사용가능 (X)

import java.util.*;

class Guest{
    private String _name;
    public Guest(String name) {_name = name;}
    public String getName() {return _name;}
}

class GuestList extends Vector<Guest>{
    public GuestList(){super();}
    public Guest getAt(int index){
        return super.get(index);
    }
    public void addTail(Guest ptr){super.add(ptr);}
    public void removeGuest(String name){
        Guest tmp;
        for(int i=0; i<this.elementCount; i++){
            tmp = this.elementAt(i);
            if(name.equals(tmp.getName()))
                super.removeElementAt(i);
        }
    }
}
public class GuestMan{
    public static void main(String[] args){
        GuestList guests = new GuestList();
        guests.addTail(new Guest("Jennifer"));
        guests.addTail(new Guest("Susan"));
        guests.addTail(new Guest("Mary"));
        guests.removeGuest("Jennifer");
        Iterator<Guest> i = guests.iterator();
        while(i.hasNext())
            System.out.print(i.next().getName() + " ");        
    }
}