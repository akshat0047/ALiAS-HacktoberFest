import java.util.Scanner;
import java.lang.Math;
class diag_diff
{
    public static void main(String args[])
    {
        Scanner sc  = new Scanner(System.in);
        System.out.println("enter the number of elements");
        int n = sc.nextInt();
        int arr[][] = new int[n][n];
        
        System.out.println("enter the elements");
        for(int i = 0; i < n; i++)
        {
            for(int j =0; j < n; j++)
            arr[i][j] = sc.nextInt();

        }

        int sum1 = 0;
        int sum2 = 0;
        int diff = 0;

        for(int i = 0; i < n; i++)
        {
            for(int j =0; j < n; j++)
            {
                if(i==j)
                sum1 += arr[i][j];
                if(i+j == n-1)
                sum2 += arr[i][j];
            }

        }

        diff = Math.abs(sum1 - sum2);
        System.out.println(diff);
    }
}