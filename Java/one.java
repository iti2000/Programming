//1.Implement a class and method without parameters
class ABC{
  int x=5,y=4;
  public void fun(){
    System.out.println(x*y);
  }
}


class one{

    public static void main(String args[])
        {
          ABC abc = new ABC();
          abc.fun(); 
        }

}
