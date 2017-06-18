import java.util.Scanner;

public class AllSubSetOfSizeK {

	public void subset(int[] A, int k, int start, int currLen, boolean[] used) {

		if (currLen == k) {
			int counter = 1;
			for (int i = 0; i < A.length; i++) {
				if (used[i]) {
					if(counter < k) {
						System.out.print(A[i] + " ");
					} else {
						System.out.print(A[i]);
					}
					counter++;
				}
			}
			System.out.println();
			return;
		}
		if (start == A.length) {
			return;
		}
		// For every index we have two options,
		// 1.. Either we select it, means put true in used[] and make currLen+1
		used[start] = true;
		subset(A, k, start + 1, currLen + 1, used);
		// 2.. OR we dont select it, means put false in used[] and dont increase
		// currLen
		used[start] = false;
		subset(A, k, start + 1, currLen, used);
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int k = sc.nextInt();

		int A[] = new int[n];
		for (int i=0; i<n; i++) {
			A[i] = i+1;
		}

		boolean[] B = new boolean[A.length];
		AllSubSetOfSizeK i = new AllSubSetOfSizeK();

		i.subset(A, k, 0, 0, B);
	}
}
