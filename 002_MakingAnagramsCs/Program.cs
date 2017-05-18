using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class Solution
{

  static void Main(String[] args)
  {
    uint result = default(uint);
    string a = Console.ReadLine();
    string b = Console.ReadLine();

    Dictionary<char, uint> mapA = new Dictionary<char, uint>();
    Dictionary<char, uint> mapB = new Dictionary<char, uint>();

    foreach (var item in a)
    {
      if (!mapA.ContainsKey(item))
      {
        mapA[item] = 1;
      }
      else
      {
        mapA[item]++;
      }
    }

    foreach (var c in b)
    {
      if (mapB.TryGetValue(c, out uint val))
      {
        val++;
      }
      else
      {
        mapB[c] = 1;
      }
    }

    foreach (var item in mapA)
    {
      if (mapB.TryGetValue(item.Key, out uint val))
      {

      }
    }
  }
}
