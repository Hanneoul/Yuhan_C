using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    internal class Program
    {
        static void Main()
        {
            Task.Run(() => DoPrint()); // 1, 2, 3, ...
            Console.WriteLine("[?] async await 사용 예제");
            Thread.Sleep(1);
        }
        static async void DoPrint()
        {
            await PrintNumberAsync();
        }
        static async Task PrintNumberAsync()
        {
            await Task.Run(() =>
            {
                for (int i = 0; i < 300; i++)
                {
                    Console.WriteLine(i + 1);
                }
            });
        }
    }
}
