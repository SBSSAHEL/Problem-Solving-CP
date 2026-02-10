string[] inpt = Console.ReadLine().Split();

long n = long.Parse(inpt[0]);
long m = long.Parse(inpt[1]);
long a = long.Parse(inpt[2]);

 //Manual Ceiling Formula:(x+a-1)/a
 
long n_stone = (n+a-1)/a; // '-1' is carry 1
long m_stone = (m+a-1)/a;

long total = n_stone * m_stone; //matrix_sys

Console.WriteLine(total);