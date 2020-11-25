# lab_5
## 10 вариант.
  ## __Задание заключается в том, чтобы вывести количество столбцов, содержащих повторяющиеся элементы в двумерном массиве.__

*(т.к. в программе используется функция srand() и rand(), то выходные данные всегда разные)*
*// для удобства чтения заключим попытки разных вводов в фигурные скобки *

### Входные данные: 
```
{ //1 попытка
5
7
}
{ //2 попытка
10
10
}
```

### Выходные данные :
```
{//1 попытка
Enter number of rows: 5
Enter number of columns: 7

(0,0) = 1       (0,1) = 2       (0,2) = 1       (0,3) = 2       (0,4) = 5       (0,5) = 4       (0,6) = 3
(1,0) = 3       (1,1) = 2       (1,2) = 1       (1,3) = 4       (1,4) = 2       (1,5) = 5       (1,6) = 4
(2,0) = 2       (2,1) = 5       (2,2) = 1       (2,3) = 1       (2,4) = 3       (2,5) = 2       (2,6) = 1
(3,0) = 3       (3,1) = 5       (3,2) = 2       (3,3) = 5       (3,4) = 1       (3,5) = 2       (3,6) = 2
(4,0) = 1       (4,1) = 1       (4,2) = 2       (4,3) = 3       (4,4) = 5       (4,5) = 1       (4,6) = 4

 1)     (0,0) AND (4,0)  is equal // здесь показаны координаты повторяющихся элементов
 2)     (0,1) AND (1,1)  is equal
 3)     (0,2) AND (1,2)  is equal
 4)     (0,4) AND (4,4)  is equal
Количество столбцов: 4
}

{//2 попытка
Enter number of rows: 10
Enter number of columns: 10

(0,0) = 1       (0,1) = 5       (0,2) = 4       (0,3) = 5       (0,4) = 3       (0,5) = 3       (0,6) = 2       (0,7) = 5       (0,8) = 1       (0,9) = 4
(1,0) = 2       (1,1) = 4       (1,2) = 2       (1,3) = 5       (1,4) = 2       (1,5) = 4       (1,6) = 3       (1,7) = 5       (1,8) = 4       (1,9) = 4
(2,0) = 4       (2,1) = 3       (2,2) = 5       (2,3) = 4       (2,4) = 2       (2,5) = 3       (2,6) = 5       (2,7) = 5       (2,8) = 5       (2,9) = 1
(3,0) = 4       (3,1) = 3       (3,2) = 4       (3,3) = 2       (3,4) = 4       (3,5) = 2       (3,6) = 5       (3,7) = 3       (3,8) = 1       (3,9) = 3
(4,0) = 3       (4,1) = 1       (4,2) = 4       (4,3) = 1       (4,4) = 2       (4,5) = 5       (4,6) = 5       (4,7) = 1       (4,8) = 4       (4,9) = 1
(5,0) = 1       (5,1) = 2       (5,2) = 2       (5,3) = 1       (5,4) = 2       (5,5) = 2       (5,6) = 5       (5,7) = 2       (5,8) = 5       (5,9) = 3
(6,0) = 5       (6,1) = 1       (6,2) = 2       (6,3) = 1       (6,4) = 1       (6,5) = 2       (6,6) = 2       (6,7) = 3       (6,8) = 5       (6,9) = 2
(7,0) = 5       (7,1) = 2       (7,2) = 4       (7,3) = 3       (7,4) = 5       (7,5) = 3       (7,6) = 1       (7,7) = 3       (7,8) = 1       (7,9) = 5
(8,0) = 1       (8,1) = 3       (8,2) = 1       (8,3) = 5       (8,4) = 3       (8,5) = 5       (8,6) = 4       (8,7) = 4       (8,8) = 2       (8,9) = 5
(9,0) = 3       (9,1) = 3       (9,2) = 5       (9,3) = 3       (9,4) = 3       (9,5) = 2       (9,6) = 5       (9,7) = 3       (9,8) = 2       (9,9) = 3

 1)     (0,0) AND (5,0)  is equal
 2)     (0,2) AND (3,2)  is equal
 3)     (0,3) AND (1,3)  is equal
 4)     (0,4) AND (8,4)  is equal
 5)     (0,5) AND (2,5)  is equal
 6)     (0,6) AND (6,6)  is equal
 7)     (0,7) AND (1,7)  is equal
 8)     (0,8) AND (3,8)  is equal
 9)     (0,9) AND (1,9)  is equal
Количество столбцов: 9
}
```
