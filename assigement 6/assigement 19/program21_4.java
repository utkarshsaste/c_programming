class Logic
{
    void countFactors(int num)
    {
        int count = 0;

        for(int i = 1; i <= num; i++)
        {
            if(num % i == 0)
            {
                count++;
            }
        }

        System.out.println("Total number of factors of " + num + " is: " + count);
    }
}

class program21_4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.countFactors(20);
    }
}
