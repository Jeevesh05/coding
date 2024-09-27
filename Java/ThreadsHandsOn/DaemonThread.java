class Daemon1 extends Thread {
    @Override
    public void run() {
        System.out.println("This is daemon Thread");
        System.out.println("daemon thread priority = " + Thread.currentThread().getPriority());
    }
}

public class DaemonThread {
    public static void main(String[] args) {
        /*
         * The main thread is likely terminating before the daemon thread gets a chance
         * to print the output.
         * 
         * Since daemon threads are terminated immediately when there are no user
         * (non-daemon) threads running, your main thread finishes right after starting
         * the daemon thread, which means the JVM shuts down the daemon thread before it
         * can execute its run method.
         */
        Daemon1 t1 = new Daemon1();
        t1.setDaemon(true);
        t1.setPriority(10);
        t1.start();
        System.out.println("main thread");
        System.out.println("main thread Priority = " + Thread.currentThread().getPriority());
    }
}
/*
 * Priority does not guarantee execution order: Setting the priority of a thread
 * to 10 gives it a higher chance of getting CPU time sooner, but it does not
 * mean that the thread will immediately start executing before the main thread
 * finishes its task. It simply gives the thread a higher likelihood of being
 * selected for execution.
 * 
 * The main thread's execution is deterministic: The main thread is already
 * running when it creates and starts the daemon thread, so it quickly executes
 * the System.out.println() calls before the JVM scheduler can switch over to
 * the newly created daemon thread.
 * 
 * Daemon thread starts in parallel: The t1.start(); method tells the JVM to
 * start the daemon thread asynchronously (in parallel). It doesn't block the
 * main thread from continuing its execution. Therefore, the main thread
 * continues and finishes printing its output ("main thread" and
 * "main thread Priority = 5") before the JVM gives the daemon thread a chance
 * to run.
 */
