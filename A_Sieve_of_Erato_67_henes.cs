int t = int.Parse(Console.ReadLine());

int i = 0;

while (i < t)
{
    int n = int.Parse(Console.ReadLine());


    int[] numbers = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

    bool found = numbers.Contains(67);

    if (found)
    {
        Console.WriteLine("YES");
    }
    else
    {
        Console.WriteLine("NO");
    }

    i++;
}