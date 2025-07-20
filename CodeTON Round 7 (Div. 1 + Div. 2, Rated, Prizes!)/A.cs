int t = int.Parse(Console.ReadLine());

for (int i = 0; i < t; i++)
{
    int n = int.Parse(Console.ReadLine());

    int[] arr = Console.ReadLine()
        .Split()
        .Select(int.Parse)
        .ToArray();

    Array.Sort(arr, 1, n - 1);

    if (arr[0] > arr[1])
        Console.WriteLine("NO");
    else
        System.Console.WriteLine("YES");
}