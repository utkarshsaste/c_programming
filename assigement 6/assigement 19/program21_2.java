class Logic
{
    void countEvenOddRange(int n)
    {
        int evenCount = 0;
        int oddCount = 0;

        for(int i = 1; i <= n; i++)
        {
            if(i % 2 == 0)
            {
                evenCount++;
            }
            else
            {
                oddCount++;
            }
        }

        System.out.println("Count of even numbers: " + evenCount);
        System.out.println("Count of odd numbers: " + oddCount);
    }
}

class program21_2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.countEvenOddRange(50);
    }
}
