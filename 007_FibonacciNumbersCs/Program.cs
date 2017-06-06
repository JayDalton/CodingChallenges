using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

class Solution
{
  public static int FibonacciRecursive(int n)
  {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return FibonacciRecursive(n - 1) + FibonacciRecursive(n - 2);
  }

  public static uint Fibonacci(int n)
  {
    if (n == 0) return 0;
    if (n == 1) return 1;

    uint ret = default(uint);
    uint h1 = default(uint);
    uint h2 = 1;

    for (int i = 1; i < n; i++)
    {
      ret = h1 + h2;
      h1 = h2;
      h2 = ret;
    }

    return ret;
  }

  static void Main(String[] args)
  {
    int n = Convert.ToInt32(Console.ReadLine());
    Console.WriteLine(Fibonacci(n));
    Console.ReadLine();
  }
}
