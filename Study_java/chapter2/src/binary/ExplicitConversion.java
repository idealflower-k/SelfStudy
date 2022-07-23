package binary;

public class ExplicitConversion {
	public static void main(String[] args) {
		
		int i_num = 1000;
		byte b_num = (byte)i_num;
		System.out.println(i_num);
		System.out.println(b_num);

		double d_num = 3.14;
		i_num = (int)d_num;
		System.out.println(i_num);

		float f_num = 0.9F;
		int num1 = (int)d_num + (int)f_num;
		int num2 = (int)(d_num + f_num);
		System.out.println(num1);
		System.out.println(num2);
	}
}
