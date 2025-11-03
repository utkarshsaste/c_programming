class Logic
{
    void calculateSum(int n)
    {
        int sum = 0;

        for(int i = 1; i <= n; i++)
        {
            sum = sum + i;
        }

        System.out.println("Sum of first " + n + " natural numbers is: " + sum);
    }
}

class program16_1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.calculateSum(10);
    }
}
