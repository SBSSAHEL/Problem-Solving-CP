int t = int.Parse(Console.ReadLine());

int i = 0;
while (i<t)
{
    string nw = Console.ReadLine();
    string[] v = nw.Split();

    long n = long.Parse(v[0]);
    long w = long.Parse(v[1]);

    Console.WriteLine(n - (n / w));

    i++;
}