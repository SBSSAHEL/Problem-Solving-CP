string[] input = Console.ReadLine().Split();
int n = int.Parse(input[0]);
int k = int.Parse(input[1]);


string[] scoreIpt = Console.ReadLine().Split();
int[] scores = new int[n];
for (int i = 0; i < n; i++)
{
    scores[i] = int.Parse(scoreIpt[i]);
}
int kthSc = scores[k - 1];

int cnt = 0;
for (int i = 0; i < n; i++)
{
    if (scores[i] >= kthSc && scores[i] > 0)
    {
        cnt++;
    }
}

Console.WriteLine(cnt);

