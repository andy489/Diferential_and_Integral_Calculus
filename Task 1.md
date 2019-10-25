## Курсова задача 1
Дадена е рекурентната редица <img src="https://latex.codecogs.com/svg.latex?\{a_n\}_{n=1}^{\infty}">, където за всяко <img src="https://latex.codecogs.com/svg.latex?n\in{N},{\;}a_{n+1}=F(a_n)"> и <img src="https://latex.codecogs.com/svg.latex?а_1=\lambda">.<img src="https://latex.codecogs.com/svg.latex?">
- <img src="https://latex.codecogs.com/svg.latex?a)"> Изследваите за сходимост редицата <img src="https://latex.codecogs.com/svg.latex?\{a_n\}"> в зависимост от <img src="https://latex.codecogs.com/svg.latex?\lambda">.\;
- <img src="https://latex.codecogs.com/svg.latex?b)"> Напишете програма, която по зададен първи член връща отговор колко е границата и по зададени пет достатъчно големи индекса извежда съответните членове на редицата с добра точност;

<img src="https://latex.codecogs.com/svg.latex?\boxed{62.}{\;}F(x)=\frac{-2x-9}{x^2+7x+13},{\;}\lambda\in{\mathbb{R}}">.

## Решение

<img src="https://latex.codecogs.com/svg.latex?a)"> 

<img src="https://latex.codecogs.com/svg.latex?a_{n+1}=\frac{-2a_n-9}{a_n^2+7a_n+13},{\;}a_1=\lambda\in{\mathbb{R}}">

Ако допуснем, че редицата <img src="https://latex.codecogs.com/svg.latex?\{a_n\}_{n=1}^{\infty}"> има граница <img src="https://latex.codecogs.com/svg.latex?\lim_{n\rightarrow\infty}a_n=l">, то от граничния преход: <img src="https://latex.codecogs.com/svg.latex?l=\frac{-2l-9}{l^2+7l+13}\Leftrightarrow">

<img src="https://latex.codecogs.com/svg.latex?l^3+7l^2+13l=-2l-9\Leftrightarrow{l^3+7l^2+15l+9=0}\Leftrightarrow{l^3+l^2+6l^2+6l+9l+9=0}">

<img src="https://latex.codecogs.com/svg.latex?\Leftrightarrow{l^2(l+1)+6l(l+1)+9(l+1)=0}\Leftrightarrow{(l^2+6l+9)(l+1)=0}\Leftrightarrow{(l+3)^2(l+1)=0}">
<br>
<img src="https://latex.codecogs.com/svg.latex?a_{n+1}-a_n=\frac{-(a_n+1)(a_n+3)^2}{a_n^2+7a_n+13}">
<br>
<img src="https://latex.codecogs.com/svg.latex?sign(a_{n+1}-a_n)">

![](https://github.com/andy489/Data_Structures_and_Algorithms_CPP/blob/master/assets/DIC%2001.png)

<img src="https://latex.codecogs.com/svg.latex?1.){\;}\boxed{\lambda\in(-1;\infty)}"> 

<img src="https://latex.codecogs.com/svg.latex?a_{n+1}-(-1)=\frac{-2a_a-9}{a_n^2+7a_n+13}+1=\frac{-2a_n-9+a_n^2+7a_n+13}{a_n^2+7a_n+13}=">

<img src="https://latex.codecogs.com/svg.latex?=\frac{a_n^2+5a_n+4}{a_n^2+7_n+13}=\frac{(a_n+4)(a_n+1)}{denom.>0}\Rightarrow{a_{n+1>-1}}"> и намалява, т.е. (*ограничена отдолу и намаляваща*) <img src="https://latex.codecogs.com/svg.latex?\Rightarrow{\lim_{n\rightarrow\infty}a_n=-1}">.

<img src="https://latex.codecogs.com/svg.latex?2.){\;}\boxed{\lambda{=-1}}"> 

<img src="https://latex.codecogs.com/svg.latex?a_{n+1}-a_n=0\Rightarrowa_{n+1}=a_n=\cdots{=}a_1=-1\Rightarrow\lim_{n\rightarrow\infty}a_n=-1">.

<img src="https://latex.codecogs.com/svg.latex?3.){\;}\boxed{\lambda\in(-3;-1)}"> 

В този интервал редицата е растяща и съответно ще искаме да проверим дали ако сме взели първи член <img src="https://latex.codecogs.com/svg.latex?a_1=\lambda"> от този интервал, то за някое достатъчно голямо <img src="https://latex.codecogs.com/svg.latex?n:a_n"> ще „прескочи“ кандидата за граница отдясно <img src="https://latex.codecogs.com/svg.latex?n:-1">. Ако това не се случи, то тя ще е растяща и ограничена отгоре от <img src="https://latex.codecogs.com/svg.latex?n:-1">, а ако това се случи, тя ще е намаляваща и ограничена отдолу, т.е. при всички възможни сценарии ще има граница <img src="https://latex.codecogs.com/svg.latex?\lim_{n\rightarrow\infty}a_n=-1">.

<img src="https://latex.codecogs.com/svg.latex?4.){\;}\boxed{\lambda{=-3}}"> 

<img src="https://latex.codecogs.com/svg.latex?a_{n+1}-a_n=0\Rightarrowa_{n+1}=a_n=\cdots{=a_1}=\lambda=-3\Rightarrow\lim_{n\rightarrow\infty}a_n=-3">.

![](https://github.com/andy489/Data_Structures_and_Algorithms_CPP/blob/master/assets/DIC%2002.png)

<img src="https://latex.codecogs.com/svg.latex?5.){\;}\boxed{\lambda\in(-4;-3)}"> 

В този интервал редицата е растяща и<br>
<img src="https://latex.codecogs.com/svg.latex?a_{n+1}-(-3)=\frac{-2a_n-9}{a_n^2+7a_n+13}+3=\frac{3a_n^2+19a_n+30}{denom.>0}=\frac{3(a_n+\frac{10}{3})(a_n+3)}{denom.>0}">

<img src="https://latex.codecogs.com/svg.latex?5.1.){\;}\boxed{\lambda\in(\frac{-10}{3};-3)}:a_{n+1}-(-3)<0"> и <img src="https://latex.codecogs.com/svg.latex?\{a_n\}"> е растяща <img src="https://latex.codecogs.com/svg.latex?\Rightarrow{\lim_{n\rightarrow{\infty}}a_n=-3}">.

<img src="https://latex.codecogs.com/svg.latex?5.2.){\;}\boxed{\lambda{=-\frac{10}{3}}}:a_{n+1}=-3\stackrel{\text{4.)}}{\Rightarrow}\lim_{n\rightarrow\infty}{a_n=-3}">.


<img src="https://latex.codecogs.com/svg.latex?5.3.){\;}\boxed{\lambda\in(-4,-\frac{10}{3})}:a_{n+1}-(-3)>0"> и <img src="https://latex.codecogs.com/svg.latex?\{a_n\}"> е растяща <img src="https://latex.codecogs.com/svg.latex?\Rightarrow\lim_{n\rightarrow\infty}a_n=-1"> (*от 3.)*).

<img src="https://latex.codecogs.com/svg.latex?6.){\;}\boxed{\lambda=-4}:a_{n+1}=-1\stackrel{\text{2.)}}{\Rightarrow}\lim_{n\rightarrow\infty}a_n=-1">.

<img src="https://latex.codecogs.com/svg.latex?7.){\;}\boxed{\lambda\in(-\infty{;}-4)}:a_{n+1}-(-3)>0">, т.е. прескача <img src="https://latex.codecogs.com/svg.latex?-3"> и <img src="https://latex.codecogs.com/svg.latex?\{a_n\}"> е растяща <img src="https://latex.codecogs.com/svg.latex?\Rightarrow{\lim_{n\rightarrow\infty}{a_n}=-1}">.
