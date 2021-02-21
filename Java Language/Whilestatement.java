package JavaStudy;

import java.util.*;

public class Whilestatement {
	public static void main(String[] args) {
		Scanner stdIn = new Scanner(System.in);
		System.out.print("1~n±îÁö µ¡¼ÀÇÒ nÀ» ÀÔ·Â = ");
		int n = stdIn.nextInt();
		int i = 0;
		int sum = 0;
		while(i <= n) {
			sum += i;
			i++;
		}
		System.out.println(sum);
	}
}
