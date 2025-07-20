int t = int.Parse(Console.ReadLine());

for (int i = 0; i < t; i++)
{
    int rating = int.Parse(Console.ReadLine());
    if (rating <= 1399)
        System.Console.WriteLine("Division 4");
    else if (rating <= 1599)
        System.Console.WriteLine("Division 3");
    else if (rating <= 1899)
        System.Console.WriteLine("Division 2");
    else
        System.Console.WriteLine("Division 1");
}