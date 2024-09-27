class WaitingThreadInterrupt extends Thread {
    @Override
    public void run() {
        try {
            for (int i = 0; i < 5; i++) {
                System.out.println(Thread.currentThread().getName() + " : " + i);
                sleep(1000);
            }
        } catch (Exception e) {
            System.out.println(Thread.currentThread().getName() + " : " + e);
        }

    }
}

class RunningThreadInterrupt extends Thread {
    @Override
    public void run() {
        if (Thread.currentThread().isInterrupted()) {
            System.out.println(Thread.currentThread().getName() + " : " + "interrupted");
        } else {
            for (int i = 0; i < 5; i++) {
                System.out.println(Thread.currentThread().getName() + " : " + i);
            }
        }
    }
}

public class ThreadInterrupt {
    public static void main(String[] args) {
        WaitingThreadInterrupt wt = new WaitingThreadInterrupt();
        wt.start();
        wt.interrupt();

        RunningThreadInterrupt rt = new RunningThreadInterrupt();
        rt.start();
        rt.interrupt();
    }
}
