//27. Program to implement multiple threads.

class p27{
  public static void main(String[] args) {

    Thread t1 = new Thread(new Runnable(){
      public void run(){
        try{
					for(int i=0;i<5;i++){
						System.out.println("\t" + i);
						Thread.sleep(100);
					}
				}catch(Exception e){
					System.out.println(e);
				}
      }
    },"Iti");

    Thread t2 = new Thread(new Runnable(){
      public void run(){
        try{
					for(int i=0;i<5;i++){
						System.out.println(i);
						Thread.sleep(100);
					}
				}catch(Exception e){
					System.out.println(e);
				}
      }
    },"Patel");

    t1.start();
    t2.start();

  }
}
