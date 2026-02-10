Console.WriteLine("Type your fav car names (comma separated):");

string cars = Console.ReadLine();

string[] car = cars.Split(",");

int i = 0;

while (i<car.Length)
{
    if (car[i].Trim().ToLower() == "tesla")
    {
        car[i] = "gay";
    }
    i++;
}

Console.WriteLine("modified list:");

foreach (string c in car)
{
    Console.WriteLine(c.Trim());
}


