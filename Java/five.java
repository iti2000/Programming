//5.Program to implement this keyword

class ABC{
  int x;
  int y;
  public void fun(int x,int y)
  {
    this.x = x;
    this.y = y;
    System.out.println(this.x +","+ this.y);
  }
}


class five{
  public static void main(String args[])
  {
    ABC abc = new ABC();
    abc.fun(3,4);

  }
}
