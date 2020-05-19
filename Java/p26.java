//26. Program to create new threads.

class A extends Thread{
  A(){
    Thread t = new Thread(this);
    t.start();
  }
  public void run(){
    System.out.println("Extended Thread");
  }
  public void fun(){
    System.out.println("hello");
  }
}

class B implements Runnable{
  public void run(){
    System.out.println("Runnable Thread");
  }
}

class p26{
  public static void main(String[] args) {
    /*A a = new A();
    a.start();
    a.fun();*/
    new A();

    //B b = new B();
    Thread t = new Thread(new B());
    t.start();
  }
}
