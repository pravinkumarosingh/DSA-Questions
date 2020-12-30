import java.io.*;
import java.util.*;

class zeroonetwo{
    static void sort012(int a[], int n){
        Arrays.sort(a);
        for(int i=0;i<n;i++){
            System.out.print(a[i]+" ");
        }
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a[] = new int[n];
        for(int i=0;i<n;i++){
            a[i] = sc.nextInt();
        }

        sort012(a, n);
    }
}
