package binary;

public class ImplicitConversion {
	public static void main(String[] args) {
		// 묵시적 형 변환
		byte b_num = 10;
		int num = b_num;
		System.out.println(num);

		long l_num = 10;
		float f_num = l_num;
		System.out.println(f_num);

		double d_num = f_num + num;
		System.out.println(d_num);
	}
}
