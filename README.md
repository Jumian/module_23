### Задача ###
#### В практической работе есть: #### 

Обязательные задачи помогут проверить, как вы усвоили материал модуля. Их нужно сдать на проверку куратору.

Дополнительные задачи подойдут тем, кто хочет ещё немного потренироваться, решая задачки по программированию. Вы также можете отправлять их на проверку и получать обратную связь куратора, хотя это необязательно.



#### Цели практической работы ####
Познакомиться с работой препроцессора и попрактиковаться в работе с макросами.
#### Научиться: #### 
- объявлять и использовать макросы-константы,
- объявлять и использовать макросы-функции,
- пользоваться директивой препроцессора с условием,
- смотреть итоговой исходный код после препроцессора.


#### Что входит в практическую работу ####
#### Обязательные задачи: #### 

- Реализовать продвинутый ввод и вывод дней недели.
- Реализовать анализ вагонов.
#### Дополнительные задачи: #### 

- Реализовать вывод выбранного времени года.
#### Общие условия #### 

Разработка выполняется в среде CLion.



### Задание 1. Реализация продвинутого ввода и вывода дней недели ###
#### Что нужно сделать #### 
Используя макросы, реализуйте небольшую программу по вводу дня недели и выводу этого дня недели в текстовом виде в консоль.

В начале программы пользователь вводит день недели в виде его порядкового номера. В результате в консоли появляется буквенное отображение этого дня недели.

В этом упражнении запрещается использовать классические переменные, кроме как для хранения ввода пользователя. Использовать строковые литералы напрямую тоже нельзя. Всё должно быть реализовано исключительно на макросах.

#### Советы и рекомендации ####
Конкатенация двух фрагментов может породить токен, который в свою очередь является именем макроса, и этот макрос тоже раскроется. Используйте это свойство для перевода константы дня недели в строковый литерал.

Обязательно просмотрите итоговый код после препроцессинга из CLion с помощью Shift-Shift → Preprocess current TU.

#### Что оценивается ####
Корректность работы программы. Модульность и элегантность решения с помощью макросов.

#### Как отправить работу на проверку #### 
Пришлите ссылку на repl.it или файл CPP с решением через форму ниже.



### Задание 2. Вывод времени года ###
#### Что нужно сделать #### 
Используя макросы вместе с условными директивами прекомпиляции (#if / #endif), реализуйте простую программу по выводу названия времени года в консоль.

Пользователь программы, который будет иметь дело с вашим кодом, в этом случае тоже программист. С помощью определения одного из макросов (в самом коде): SPRING, SUMMER, AUTUMN или WINTER он задаёт сезон, название, которое хочет увидеть на экране. При компиляции и запуске программы на экране должно появиться название именно этого сезона и только его.

#### Советы и рекомендации #### 
Так как препроцессор работает до компиляции, то в #if/#endif-директивы вы можете обернуть всю функцию main сразу.

Обязательно просмотрите итоговый код после препроцессинга из CLion с помощью Shift-Shift → Preprocess current TU.

#### Что оценивается ####
Корректность работы программы при разных заданных дефинициях макросов.

#### Как отправить работу на проверку ####
Пришлите ссылку на repl.it или файл CPP с решением через форму для сдачи домашнего задания.



### Задание 3. Анализ заполненности вагонов в поезде* (дополнительное задание) ###
#### Что нужно сделать ####
В поезде всего 10 вагонов. В каждом из этих вагонов может находиться до 20 пассажиров — это их оптимальное количество. Проанализируйте количество людей в каждом вагоне и сначала сообщите об излишне заполненных вагонах, далее о вагонах с пустыми пассажирскими местами. В заключение выведите общее количество пассажиров во всех вагонах.

При старте программы пользователь вводит количество пассажиров в каждом вагоне. Замечания о вагонах должны выводиться в стандартную консоль.

При выполнении задания пользоваться нельзя напрямую пользоваться for-циклами, только опосредованно, через макросы.

#### Советы и рекомендации ####
С помощью макроса реализуйте модульный способ вызова функции-предиката над элементами массива. Сами функции-предикаты реализуйте отдельно, в виде обычных классических функций (не макросов).

Функция-предикат — это функция, которая возвращает bool-значение.

Обязательно просмотрите итоговый код после препроцессинга из CLion с помощью Shift-Shift → Preprocess current TU.

#### Что оценивается ####
Корректность работы программы. Модульность и элегантность решения с помощью макросов.

#### Как отправить работу на проверку ####
Пришлите файл CPP с решением через форму ниже.