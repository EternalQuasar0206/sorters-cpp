mkdir bin

:: Bubble sort algorithm
g++ bubbleSort.cpp -o .\bin\bubbleSort.exe
.\bin\bubbleSort.exe

:: BubbleSort in 3 user defined values algorithm
g++ threeValuesBubbleSort.cpp -o .\bin\threeValuesBubbleSort.exe
.\bin\threeValuesBubbleSort.exe

:: Merge sort algorithm
g++ mergeSort.cpp -o .\bin\mergeSort.exe
.\bin\mergeSort.exe

:: Quick sort algorithm
g++ quickSort.cpp -o .\bin\quickSort.exe
.\bin\quickSort.exe

:: Order detector algorithm (returns the max sequence of inserted numbers)
g++ orderDetector.c -o .\bin\orderDetector.exe
.\bin\orderDetector.exe

:: Detect first digit algorithm (returns position of the first numeric digit found)
g++ detectFirstDigit.c -o .\bin\detectFirstDigit.exe
.\bin\detectFirstDigit.exe

g++ structReading.c -o .\bin\structReading.exe
.\bin\structReading.exe