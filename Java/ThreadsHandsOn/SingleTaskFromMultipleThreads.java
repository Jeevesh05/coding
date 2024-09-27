// 1. sinle task from single thread
// simply extend thread class, create the obj of new class and call start()
//2. single task from multiple threads
// create multiple objects of thread class and call start on them.

class MyThread2 extends Thread {
    @Override
    public void run() {
        System.out.println("task done");
    }
}

public class SingleTaskFromMultipleThreads {
    public static void main(String[] args) {
        MyThread2 t1 = new MyThread2();
        t1.start();
        MyThread2 t2 = new MyThread2();
        t2.start();
    }
}
