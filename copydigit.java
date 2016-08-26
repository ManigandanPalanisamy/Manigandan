
import java.lang.System.in;
import java.lang.System.out;
import java.util.Arrays;
import java.util.Scanner;


public class copydigit {
    public static void main(String[] args){
        Scanner s=new Scanner(in);
        out.print("Enter number of elements in the array : ");
        int arr[]=new int[s.nextInt()],iteration;
        for(iteration=0;iteration<arr.length;iteration++){
            out.print("Enter element["+iteration+"] : ");
            arr[iteration]=s.nextInt();
        }
        Arrays.sort(arr);
        for(iteration=0;iteration<arr.length-1;iteration+=2){
            if(arr[iteration]!=arr[iteration+1]){
                out.print("The unique number : "+arr[iteration]);
                break;
            }
        }
    }
}