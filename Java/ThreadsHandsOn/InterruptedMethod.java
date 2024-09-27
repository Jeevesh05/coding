class InterruptedDemo extends Thread {
    @Override
    public void run() {
        System.out.println("A1 : " + Thread.interrupted()); // true-> false
        System.out.println("A2 : " + Thread.interrupted());
        System.out.println("B1" + Thread.currentThread().isInterrupted());
        System.out.println("B2" + Thread.currentThread().isInterrupted());

    }
}

public class InterruptedMethod {
    public static void main(String[] args) {

    }
}
