int t = int.Parse(Console.ReadLine());

int x = 0;

int i = 0;

while (i < t)
{
    string  val = Console.ReadLine();

    if (val.Contains('+'))
    {
        x++;
    }

    else if (val.Contains('-'))
    {
        x--;
    }

    i++;
}

Console.WriteLine(x);