using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _001_ArrayLeftRotationCs
{
  class Program
  {
    static void Main(string[] args)
    {
      string[] tokens_n = Console.ReadLine().Split(' ');
      int n = Convert.ToInt32(tokens_n[0]);
      int k = Convert.ToInt32(tokens_n[1]);
      string[] a_temp = Console.ReadLine().Split(' ');
      int[] a = a_temp.Select(element => Convert.ToInt32(element)).ToArray();

      for (int i = 0; i < n; i++)
      {
        Console.Write("{0}", a[(k + i) % n]);
        if (i < n)
        {
          Console.Write(" ");
        }
      }

      Console.ReadLine();
    }
  }
}
