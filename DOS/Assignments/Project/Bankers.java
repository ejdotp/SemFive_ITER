import java.util.Scanner;

public class Bankers {
    private int need[][], allocate[][], max[][], avail[], np, nr;

    private void input() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of processes: ");
        np = sc.nextInt();
        System.out.print("Enter the number of resources: ");
        nr = sc.nextInt(); 

        max = new int[np][nr];
        allocate = new int[np][nr];
        avail = new int[nr];
        need = new int[np][nr];

        System.out.println("\nEnter the allocation matrix: ");
        for (int i = 0; i < np; i++)
            for (int j = 0; j < nr; j++)
                allocate[i][j] = sc.nextInt();

        System.out.println("\nEnter the max matrix: ");
        for (int i = 0; i < np; i++)
            for (int j = 0; j < nr; j++)
                max[i][j] = sc.nextInt();

        System.out.println("\nEnter the available resources: ");
        for (int j = 0; j < nr; j++)
            avail[j] = sc.nextInt();

        sc.close();
    }

    private int[][] calc_need() {
        for (int i = 0; i < np; i++) {
            for (int j = 0; j < nr; j++) {
                need[i][j] = max[i][j] - allocate[i][j];
            }
        }
        return need;
    }
    
    private boolean isSafe() {
        boolean[] finish = new boolean[np];
        int[] work = avail.clone();
        int count = 0;
        int[] safeSeq = new int[np];

        while (count < np) {
            boolean found = false;
            for (int i = 0; i < np; i++) {
                if (!finish[i]) {
                    int j;
                    for (j = 0; j < nr; j++)
                        if (need[i][j] > work[j])
                            break;
                    if (j == nr) {
                        for (int k = 0; k < nr; k++) {
                            work[k] += allocate[i][k];
                        }
                        finish[i] = true;
                        found = true;
                        safeSeq[count++] = i;
                    }
                }
            }
            if (!found) {
                break;
            }
        }
        
        if(count < np){
        	System.out.println("System is not in a safe state.");
        	return false;
        } else {
        	System.out.println("System is in a safe state.");
        	System.out.print("Safe Sequence: ");
        	for(int i = 0; i < np; i++)
        		System.out.print("p" + (safeSeq[i] + 1) + " ");
        	System.out.println();
        	return true;
        }
    }

    public static void main(String[] args) {
        Bankers ba = new Bankers();
        ba.input();
        int[][] needMat = ba.calc_need();
        System.out.println("\nNeed Matrix: ");
        for( int i = 0; i < ba.np; i++){
        	for(int j = 0; j < ba.nr; j++){
        		System.out.print(needMat[i][j] + " ");
        	}
        	System.out.println();
        }
        ba.isSafe();
    }
}
