//3.Program to implement Stack.
class Stack{
  static final int max=10;
  int top;
  int a[] = new int[max];
  Stack()
  {
    top = -1;
  }
  void push(int x)
  {
    if (top >= max){
      System.out.println("Stack is overflow");
    }
    else{
      a[top++]=x;
      System.out.println("pushed value: " + x);
    }
  }
  void pop()
  {
    if(top<0){
      System.out.println("Stack is underflow");
    }
    else{
      System.out.println("poped value:" + a[top--]);
    }
  }

}

class three{
  public static void main(String args[])
  {
    Stack stack = new Stack();
    stack.push(1);
    stack.push(2);

  }
}
