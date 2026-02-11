int t = int.Parse(Console.ReadLine());

int i = 0;

while (i < t)
{
    long x = long.Parse(Console.ReadLine());

    int cnt = 0;
    long y = x+1;

    while (y<= x+200)
    {
        if (y - DigitSum(y) == x)
        {
            cnt++;
        }
        y++;
    }
    Console.WriteLine(cnt);

    i++;
}

static long DigitSum(long n)
    {
        long sum = 0;
        while (n > 0)
        {
            sum += n % 10;  
            n /= 10;        
        }
        return sum;
    }