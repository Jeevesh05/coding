// if u interrupt a thread which is on sleep then InterruptedException is thrown
class sleepDemo extends Thread {
    @Override
    // here throws Exception does not work, must use try catch
    public void run() {
        for (int i = 6; i <= 10; i++) {
            System.out.println(i);
            try {
                sleep(1000);
                // Thread.currentThread().sleep(1000);
            } catch (Exception e) {
                System.out.println(e);
            }
        }
    }
}

public class sleepMethod {
    public static void main(String[] args) throws InterruptedException {
        for (int i = 1; i <= 5; i++) {
            System.out.println(i);
            Thread.sleep(1000);
            // Thread.currentThread().sleep(1000);
        }
        sleepDemo t1 = new sleepDemo();
        t1.start();

    }
}
