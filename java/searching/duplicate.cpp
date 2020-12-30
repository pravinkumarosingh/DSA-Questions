import java.io.*;
import java.util.*;

class duplicate{
    static int findDuplicate(int arr[], int n){
        int x=0;
        Arrays.sort(arr);
        int dup;
        for(int i=1;i<n;i++){
            dup = arr[i];
            if(dup == arr[i-1]){
                 x = dup;
            }
        }

        return x;
    }



    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        System.out.println(findDuplicate(arr, n));
    }
}
