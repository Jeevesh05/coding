/*
 * 3. Mupltiple task from sinlge thread
 * It is preety useless as one thread will perform one task first and then start another
 * like here first video will be played then audio then proress bar therefore it is os no use
 * 
 * 4. Mupliple tasks from multiple threads 
 */
class Task1 extends Thread {
    @Override
    public void run() {
        System.out.println("Playing Video");
    }
}

class Task2 extends Thread {
    @Override
    public void run() {
        System.out.println("Playing Music");
    }
}

class Task3 extends Thread {
    @Override
    public void run() {
        System.out.println("Progress Bar Executing");
    }
}

class Task4 extends Thread {
    @Override
    public void run() {
        System.out.println("Timer is Executing");
    }
}

public class MupltipleTasksFromMultipleThreads {
    public static void main(String[] args) {
        Task1 t1 = new Task1();
        t1.start();

        Task2 t2 = new Task2();
        t2.start();

        Task3 t3 = new Task3();
        t3.start();

        Task4 t4 = new Task4();
        t4.start();

    }
}
