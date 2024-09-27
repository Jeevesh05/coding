class sleepDemo2 extends Thread {
    @Override
    // here throws Exception does not work, must use try catch
    public void run() {
        for (int i = 1; i <= 5; i++) {
            System.out.println(Thread.currentThread().getName() + " : " + i);
            try {
                sleep(1000);
            } catch (Exception e) {
                System.out.println(e);
            }
        }
    }
}

// replace start() with run() to see difference
public class sleepMethod2 {
    public static void main(String[] args) {
        sleepDemo2 t1 = new sleepDemo2();
        t1.start();

        sleepDemo2 t2 = new sleepDemo2();
        t2.start();
    }
}
