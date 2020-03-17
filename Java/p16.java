//16. Method Overriding

class A{
  static{
    System.out.println("Block A");
  }
  void fun(){
    System.out.println("Class A");
  }
}
class B extends A{
  static{
    System.out.println("Block B");
  }
  void fun(){
    System.out.println("Class B");
  }
}

class p16{
  public static void main(String[] args) {
    B b = new B();
    b.fun();
  }
}
