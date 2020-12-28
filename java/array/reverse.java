import java.io.*;
import java.util.Scanner;

class Main{
    static void reverseArray(int arr[], int n){
        int start=0; int end=n-1,  temp;
        while(start < end){
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
        
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
        
    }
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        
        reverseArray(arr, n);
    }
}
