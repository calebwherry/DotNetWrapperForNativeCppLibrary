using System;
using System.Collections.Generic;
using System.Diagnostics;

namespace CsharpTestApp
{
    class Program
    {
        static void Main(string[] args)
        {
            // Test cases:
            var testCases = new List<Tuple<string, string>>();
            testCases.Add(Tuple.Create("", ""));
            testCases.Add(Tuple.Create("a", "a"));
            testCases.Add(Tuple.Create("by", "yb"));
            testCases.Add(Tuple.Create("cat", "tac"));
            testCases.Add(Tuple.Create("racecar", "racecar"));

            // Test each case:
            foreach (var testCase in testCases)
            {
                var reversedStr = DotNetTestLibWrapper.ReverseString(testCase.Item1);
                Debug.Assert(reversedStr == testCase.Item2);
            }
        }
    }
}
