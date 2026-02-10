int t = int.Parse(Console.ReadLine());

int cnt = 0;

int i = 0;

while (i<t)
{
    string[] num = Console.ReadLine().Split();

    int sum = int.Parse(num[0]) + int.Parse(num[1]) + int.Parse(num[2]);

    if (sum >= 2)
    {
        cnt++;
    }

    i++;

}

Console.WriteLine(cnt);