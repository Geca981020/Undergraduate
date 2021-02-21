package JavaStudy;

import java.util.*;

public class switchstatement {
	public static void main(String[] args) {
		Scanner stdin = new Scanner(System.in);
		System.out.print("a(0<a<5) = ");
		int a = stdin.nextInt();

		switch(a) {
			case 1: 
				System.out.println("a = 1");
				break;
			case 2: 
				System.out.println("a = 2");
				break;
			case 3: 
				System.out.println("a = 3");
				break;
			case 4: 
				System.out.println("a = 4");
				break;
			default:
				System.out.println("a<=0 or a>=5");
		}
	}
}
