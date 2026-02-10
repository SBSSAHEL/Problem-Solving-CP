int n = int.Parse(Console.ReadLine());
int i = 0;
while (i < n)
{
    string w = Console.ReadLine();

    if (w.Length > 10)
    {
        char fw = w[0];
        char lw = w[w.Length - 1];
        int  wn = w.Length - 2;

        Console.WriteLine($"{fw}{wn}{lw}");

    }

    else
    {
        Console.WriteLine(w);
    }

    i++;

}