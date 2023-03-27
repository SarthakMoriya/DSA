import java.lang.Thread;

class A extends Thread {
    int t;

    A(int d) {
        this.t = d;
    }

    int n = 1;

    public void run() {
        while (n < 10) {
            System.out.println("Thread:" + this.t);
            n++;
        }
    }
}

class ThreadTut {
    public static void main(String[] args) {
        A t1 = new A(1);
        A t2 = new A(2);
        A t3 = new A(3);
        A t4 = new A(4);

        System.out.println("Main Thread Started");
        t1.start();
        t2.start();
        t3.start();
        t4.start();
        for (int i = 0; i < 5; i++) {
            try {
                Thread.sleep(1000);

            } catch (Exception e) {
                // TODO: handle exception
                System.out.println(e);
            }
        }
        System.out.println("Main Thread Ended");
        //IT IS SAID IN MULTITHREADED PROGRAMS MAIN THREAD SHOULD BE LAST ONE TO END

    }
}