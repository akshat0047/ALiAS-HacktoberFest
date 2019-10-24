import java.util.Scanner;

class diag_diff
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int arr[] = new int[5];

        for(int i = 0; i < 6; i++)
        {
            arr[i] = sc.nextInt();
        }
        
        int c = 0;
        int l = Integer.MIN_VALUE, s = Integer.MAX_VALUE;
        int sum = 0;
        for(int i =0; i<5; i++)
        {
            sum = 0;
            c = 0;
            int in = i;
            while(c<4)
            {
                if(in == 5)
                {
                    in = 0;
                }

                sum += arr[in];
                in++;
                c++;
            }

            if(sum>l)
            l = sum;

            if(sum<s)
            s = sum;

        }

        System.out.println("max = "+l+"\nmin = "+s);
    }
}