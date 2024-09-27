//resembling Thread class
class T {
    R runnable;

    T() {
        this.runnable = null; // or any default behavior
    }

    T(R runnable) {
        this.runnable = runnable;
    }

    void start() {
        System.out.println("Starting Thread...");
        if (runnable != null) {
            runnable.run(); // Call run if runnable is not null
        } else {
            run(); // Call the T's own run method
        }
    }

    public void run() {
        System.out.println("Default run method in T class");
    }

}

// resembling Runnable interface
interface R {
    void run();
}

class MyRunnable implements R {
    public void run() {
        System.out.println("This is my implementation of run method");
    }
}

class MyThread extends T {

    @Override
    public void run() {
        System.out.println("This is my implementation of run method in MyThread");
    }
}

public class ThreadStructure {
    public static void main(String[] args) {
        // MyRunnable Robj = new MyRunnable();
        // T Tobj = new T(Robj);
        // Tobj.start();

        // Create an instance of MyThread which extends T
        MyThread myThread = new MyThread();
        // Start the thread (this will call the start method and then the run method)
        myThread.start();
    }
}
