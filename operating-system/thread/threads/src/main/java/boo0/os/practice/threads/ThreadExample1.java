package boo0.os.practice.threads;

class Thread1 extends Thread {
	public void run() {
		try {
			while (true) {
				System.out.println("Hello, Thread!");
				Thread.sleep(500);
			}
		} catch (InterruptedException ie) {
			System.out.println("I'm interrupted");
		}
	}
}

public class ThreadExample1 {

	public static void main(String[] args) {
		Thread1 thread = new Thread1();
		thread.start();
		System.out.println("Hello, My Child!");
	}

}
