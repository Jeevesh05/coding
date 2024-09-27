class TotalEarnings extends Thread {
    int total = 0;

    @Override
    public void run() {
        synchronized (this) {
            for (int i = 0; i < 10; i++) {
                total += 100;
            }
            notify();
        }
        // for (int i = 0; i < 10; i++) {
        // total += 100;
        // }

    }
}

public class InterThreadComm {
    public static void main(String[] args) {
        TotalEarnings te = new TotalEarnings();
        te.start();
        System.out.println(
                "If notify not used in thread's run then main fn thread will go in indefinately waiting state");
        synchronized (te) {
            try {
                te.wait();
                System.out.println("main thread works");
            } catch (Exception e) {
                System.out.println(e.getMessage());
            }
        }
        System.out.println("total Earnings = " + te.total);
    }
}
