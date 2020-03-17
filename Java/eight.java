//8.Program to implement returning objects.

class object{
  int a;
  int b;
  object(int x,int y){
    a = x;
    b = y;
  }
  Boolean equalto(object o){
    return(o.a == a && o.b == b);
  }
}
class eight{
  public static void main(String args[]){
    object o1 = new object(100,45);
    object o2 = new object(100,45);
    object o3 = new object(200,45);
    System.out.println("o1 = o2: "+ o1.equalto(o2) + "\no1 = o3:" + o1.equalto(o3));
  }
}
