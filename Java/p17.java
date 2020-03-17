//17. super

class A{
  int a = 10;
  A(){
    
  }
  A(int temp){
    System.out.println("Temp : " + temp);
  }
  void fun(){
    System.out.println("Class A");
  }
}
class B extends A{//new A()
  int a = 20;
  B(){
    super(57);
  }
  void fun(){
    System.out.println("Class B");
    System.out.println(a);
    super.fun();
    System.out.println(super.a);
  }
}

class p17{
  public static void main(String[] args) {
    B b = new B();
    b.fun();
  }
}
