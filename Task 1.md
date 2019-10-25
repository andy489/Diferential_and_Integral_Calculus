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

![](https://github.com/andy489/Data_Structures_and_Algorithms_CPP/blob/master/assets/DIC%2001.png)
