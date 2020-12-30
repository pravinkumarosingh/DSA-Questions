import java.io.*;
import java.util.*;

class kthsmallest{
    static int kthSmallest(int a[], int n, int k){
        Arrays.sort(a);
        return a[k-1];

    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a[] = new int[n];
        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        int k = sc.nextInt();
        System.out.println(kthSmallest(a, n, k));
        
    }
}
