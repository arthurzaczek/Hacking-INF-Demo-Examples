import java.io.*;
import java.util.Scanner;

class Classifier {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// high quality and price: luxury
		// high quality low price: bargain
		// low quality high price: rip-off
		// low quality low price: junk
		Scanner sc = new Scanner(System.in);
		System.out.printf("enter price: ");
		int price = sc.nextInt();
		System.out.printf("enter quality: ");
		int quality = sc.nextInt();

		if (price < 50)
			System.out.printf("low price\n");
		else
			System.out.printf("high price\n");

		if (quality < 50)
			System.out.printf("low quality\n");
		else
			System.out.printf("high quality\n");

		if (price < 50 && quality < 50) {
			System.out.printf("junk\n");
		} else if (price >= 50 && quality < 50) {
			System.out.printf("rip off\n");
		} else if (price < 50 && quality >= 50) {
			System.out.printf("bargain\n");
		} else {
			System.out.printf("luxury\n");
		}

	}

}

public class Main {
    public static void main(String[] args) throws Exception {
		Classifier.main(null);
    }
}
