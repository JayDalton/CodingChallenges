using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

class Solution
{
  static bool isBalanced(String expression)
  {
    Stack<char> s = new Stack<char>();
    foreach (char c in expression)
    {
      if (c == '{') s.Push('}');
      else if (c == '[') s.Push(']');
      else if (c == '(') s.Push(')');
      else
      {
        if (s.Count == 0 || c != s.Peek())
          return false;
        s.Pop();
      }
    }
    return s.Count == 0;
  }

  static void Main(String[] args)
  {
    int t = Convert.ToInt32(Console.ReadLine());
    for (int a0 = 0; a0 < t; a0++)
    {
      string expression = Console.ReadLine();
      if (isBalanced(expression))
      {
        Console.WriteLine("YES");
      }
      else
      {
        Console.WriteLine("NO");
      }
    }
  }
}
