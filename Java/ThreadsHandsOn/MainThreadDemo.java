class ThreadName extends Thread {
    @Override
    public void run() {
        System.out.println("user thread name : " + Thread.currentThread().getName());
        System.out.println("status of thread inside run() : " + Thread.currentThread().isAlive());
    }
}

public class MainThreadDemo {

    public static void main(String[] args) {
        // System.out.println("hello");
        System.out.println("name of main Thread: " + Thread.currentThread().getName());
        // Thread.currentThread().setName("Rohit");
        // System.out.println("new Thread name= " + Thread.currentThread().getName());
        // System.out.println(3 / 0);
        // System.out.println(Thread.currentThread().isAlive());

        ThreadName t1 = new ThreadName();
        t1.start();
        System.out.println("status of thread outside run() : " + t1.isAlive());// can be true or false
    }
}
