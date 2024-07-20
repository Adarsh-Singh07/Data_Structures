import java.util.Scanner;
class duplicate {
	public static void main(String args[]) {
		int arr[] = new int[15];
		int n;
		Scanner scanner = new Scanner(System.in);
		n = scanner.nextInt();
		int m = n;
		for (int i = 0 ; i < n ; i ++) {
			for (int j =( i+1) ; j < n ; j++) {
				if (arr[i] == arr[j]) {
					m--;
				}
			}
		}
		System.out.println(m);
	}
}