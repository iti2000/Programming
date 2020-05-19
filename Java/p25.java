//25. Program to implement main Thread.

class p25 extends Thread{
  public static void main(String[] args) {
    Thread t = Thread.currentThread();

    System.out.println(t.getName());
    t.setName("Main Thread");
    System.out.println(t.getName());
		t.setPriority(10);  // 1 2 ....10 // 5

		try{
			for(int i=0;i<5;i++){
				System.out.println(i);
				t.sleep(1000);
			}
		}
		catch(Exception e){
			System.out.println(e);
		}
  }
}
