package JavaStudy;

import java.util.*;

public class forstatement {
	public static void main(String[] args) {
		Scanner stdIn = new Scanner(System.in);
		System.out.print("1~n±îÁö µ¡¼ÀÇÒ nÀ» ÀÔ·Â = ");
		int n = stdIn.nextInt();
		int sum = 0;
		for(int i=0; i<=n; i++){
			sum += i;
		}
		System.out.println(sum);

	}

}
