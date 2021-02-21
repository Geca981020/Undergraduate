package JavaStudy;

import java.util.*;

public class SecondProgram {

	public static void main(String[] args) {
		Scanner stdIn = new Scanner(System.in);
		System.out.print("이름과 나이, 몸무게를 space로 구분");
		String s = stdIn.next();
		int i = stdIn.nextInt();
		double d = stdIn.nextDouble();
		System.out.println("name:"+s+" age:"+i+" weight:"+d);
	}
}
