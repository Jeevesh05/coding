//program to show 3 stages to get licence
class Medical extends Thread {
    @Override
    public void run() {
        try {
            System.out.println("medical test starts");
            Thread.sleep(3000);
            System.out.println("Mediacl successful");
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}

class DrivingTest extends Thread {
    @Override
    public void run() {
        try {
            System.out.println("Driving test starts");
            Thread.sleep(3000);
            System.out.println("Driving successful");
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}

class OfficerSignature extends Thread {
    @Override
    public void run() {
        try {
            System.out.println("File sent for signature");
            Thread.sleep(3000);
            System.out.println("File Signed");
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}

public class joinThread {
    public static void main(String[] args) throws Exception {
        Medical md = new Medical();
        md.start();

        md.join();

        DrivingTest dt = new DrivingTest();
        dt.start();
        dt.join();

        OfficerSignature os = new OfficerSignature();
        os.start();
    }
}
