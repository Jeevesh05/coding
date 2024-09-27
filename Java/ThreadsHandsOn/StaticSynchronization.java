/* TO understand the imp of Static Synch, remove static form function and static keywork from variable,way of calling function in run mehtod

 * If the mthod is only Synchronized then if we had only one object on which multiple threads are working then it wont give an issues
 * but as u can see we craeted 2 objects each have 2 threads therefore a new instance of class is craeted for each object 
    Therefore we need to make the synch fn static also so that now only one copy of this function is shared by all the objects
    and sync keyword ensures the locking mechanism on it.
 */

class BookTheaterSeat {
    static int totalSeats = 20;

    static synchronized void bookTicket(int seats) {
        if (totalSeats >= seats) {
            totalSeats = totalSeats - seats;
            System.out.println(seats + " tickets booked successfully");
            System.err.println("seats left " + totalSeats);
        } else {
            System.out.println(seats + " were not booked");
        }
    }

}

class BookingThread extends Thread {
    BookTheaterSeat bts;
    int seats;

    BookingThread(BookTheaterSeat bts, int seats) {
        this.bts = bts;
        this.seats = seats;
    }

    @Override
    public void run() {
        BookTheaterSeat.bookTicket(this.seats);
    }
}

// can be refered as Movie Book Ticket App
public class StaticSynchronization {
    public static void main(String[] args) {
        BookTheaterSeat b1 = new BookTheaterSeat();
        BookingThread t1 = new BookingThread(b1, 7);
        t1.start();

        BookingThread t2 = new BookingThread(b1, 6);
        t2.start();

        BookTheaterSeat b2 = new BookTheaterSeat();
        BookingThread t3 = new BookingThread(b2, 8);
        t3.start();

        BookingThread t4 = new BookingThread(b2, 9);
        t4.start();
    }
}
