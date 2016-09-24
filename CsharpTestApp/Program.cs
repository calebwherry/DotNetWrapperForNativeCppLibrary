using System;
using System.Collections.Generic;

namespace CsharpTestApp
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Test start.");

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
                var reversedStr = DotNetTestLibWrapper.FreeFunctions.ReverseString(testCase.Item1);
                Console.WriteLine("Test case: " + testCase + ", reversedStr='" + reversedStr + "', " + (reversedStr == testCase.Item2));
            }

            Console.WriteLine("Test end.");
        }
    }
}