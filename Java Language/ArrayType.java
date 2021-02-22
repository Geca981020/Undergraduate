package JavaStudy;

public class ArrayType {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] num1 = new int[5];
		num1[0] = 1;
		num1[1] = 2;
		num1[2] = 3;
		num1[3] = 4;
		num1[4] = 5;
		
		int[] num2 = {11,12,13,14,15};
		for(int i=0; i<num1.length; i++)
			System.out.println(num1[i]);
		
		int sum = 0;
		for(int j: num2) {
			sum += j;
		}
		System.out.println("sum = "+sum);
	}

}
