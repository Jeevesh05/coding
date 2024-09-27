//There are 4 steps for thread creation by extending thread class(T1-T4) 
// and 5 steps by implementing runnable(R1)

//T1extend Thread class
class MyThread extends Thread {
    // T2 Override run method
    public void run() {
        System.out.println("Thread is running");
        System.out.println(Thread.currentThread());
    }
}

// R1 implementing runnable interface
class MyRunnable implements Runnable {
    // R2 override run method of interface
    public void run() {
        System.out.println("thread is implemented using runnable interface");
        System.out.println(Thread.currentThread());
    }
}

public class ThreadCreation {
    public static void main(String[] args) {
        // extending thread class
        // T3 creating object of thread class
        MyThread t1 = new MyThread();
        // T4 invoke start method (calling run mehtod will not create a thread)
        t1.start();

        // implementing runnable interface
        MyRunnable m1 = new MyRunnable(); // R3 create object of implementing class
        Thread t2 = new Thread(m1);// R4 create an object of thread class and pass reference of class implementing
                                   // runnable interface
        t2.start();// R5 start the thread
    }
}

// Q. How many threads are created?
// A. 3 threads are created, 1 due to main fn.

// Thread[#20,Thread-0,5,main]
// #20 is unique identifier (ID) assigned to the thread by the Java Virtual
// Machine (JVM)
// [UID, Thread Name, Priority, Thread Group]
