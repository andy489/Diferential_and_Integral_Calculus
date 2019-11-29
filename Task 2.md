## Курсова задача 2

<img src="https://latex.codecogs.com/svg.latex?f(x)=\frac{\sqrt{1+|x+2|}}{1-|x|}">

- a) Направете пълно изследване (включващо втора производна и допирателни във всяка *„специална“* точка (точка в която се нулира функцията, първата или втората производна + други));
- б) С помощта на графичен калкулатор по избор - построите графиката на функцията, асимптотите и допирателните.

<img src="https://latex.codecogs.com/svg.latex?\boxed{1.}"> Дефиниционна област: denom. <img src="https://latex.codecogs.com/svg.latex?1-|x|\neq{0}\Rightarrow{x\neq{\pm{1}}}">:<br>
<img src="https://latex.codecogs.com/svg.latex?x\in{(-\infty{,}-1)\cup{(-1,1)\cup{(1,+\infty})}}"><br>

![](https://github.com/andy489/Data_Structures_and_Algorithms_CPP/blob/master/assets/Graphic%2001.png)

<img src="https://latex.codecogs.com/svg.latex?\boxed{2.}"> Четност, нечетност, периодичност:<br>
<img src="https://latex.codecogs.com/svg.latex?f(2)=-\sqrt{5},f(-2)=-1,-f(2)=\sqrt{5}\Rightarrow{f(x)\neq{f(-x)},f(-x)\neq{-f(x)}"> за
<img src="https://latex.codecogs.com/svg.latex?{\forall{x}\Rightarrow{}}"> функцията не е нито четна нито нечетна. Дори в интервала <img src="https://latex.codecogs.com/svg.latex?(-1,1):f(x_0+x)\neq{f(x_0-x)}"> за <img src="https://latex.codecogs.com/svg.latex?\forall{x}\in{(-1,1)}"> и <img src="https://latex.codecogs.com/svg.latex?x_0=0\Rightarrow"> там няма осева симетрия. От това, че функцията е прекъсната на краен брой места <img src="https://latex.codecogs.com/svg.latex?\{-1,1\}"> следва, че функцията не е и периодична.

<img src="https://latex.codecogs.com/svg.latex?\boxed{3.}"> Знак на <img src="https://latex.codecogs.com/svg.latex?f(x)"> и поведение на <img src="https://latex.codecogs.com/svg.latex?f(x)"> в краищата на дефиниционната област:

![](https://github.com/andy489/Data_Structures_and_Algorithms_CPP/blob/master/assets/Graphic%2002.png)

<img src="https://latex.codecogs.com/svg.latex?\lim_{x\rightarrow{\pm{\infty}}}f(x)=\lim_{x\rightarrow{\pm{\infty}}"> <img src="https://latex.codecogs.com/svg.latex?\frac{\sqrt{1+|x+2|}}{1-|x|}\sim{\frac{\sqrt{x}}{-|x|}}\sim{-0}">.

<img src="https://latex.codecogs.com/svg.latex?\lim_{x\rightarrow{{-1^-}}}f(x)\sim{\frac{\sqrt{2}}{-0}}\sim{-\infty}">; 
<img src="https://latex.codecogs.com/svg.latex?\lim_{x\rightarrow{{-1^+}}}f(x)\sim{\frac{\sqrt{2}}{+0}}\sim{+\infty}">.

<img src="https://latex.codecogs.com/svg.latex?\lim_{x\rightarrow{{1^-}}}f(x)\sim{\frac{\sqrt{2}}{+0}}\sim{+\infty}">;
<img src="https://latex.codecogs.com/svg.latex?\lim_{x\rightarrow{{1^+}}}f(x)\sim{\frac{\sqrt{2}}{-0}}\sim{-\infty}">.

<img src="https://latex.codecogs.com/svg.latex?\boxed{4.}"> Асимптоти:<br>
- a) Наклонени: <img src="https://latex.codecogs.com/svg.latex?y=kx+n">, където <img src="https://latex.codecogs.com/svg.latex?k=\lim_{x\rightarrow{\pm\infty}}{\frac{f(x)}{x}}=\lim_{x\rightarrow{\pm\infty}}\frac{\sqrt{1+|x+2|}}{x(1-|x|)}\sim\frac{\sqrt{x}}{x^2}\sim{0}\Rightarrow{y=n}">.<br><img src="https://latex.codecogs.com/svg.latex?n=\lim_{x\rightarrow{\pm\infty}}(f(x)-kx)=\lim_{x\rightarrow{\pm\infty}}f(x)=0\Rightarrow"> абсцисата е наклонена асимптота в <img src="https://latex.codecogs.com/svg.latex?-\infty"> и <img src="https://latex.codecogs.com/svg.latex?+\infty">. 
- б) От вече направените изчисления знаем, че съществуват две вертикални асимптоти: <img src="https://latex.codecogs.com/svg.latex?g_1:x-=1"> и <img src="https://latex.codecogs.com/svg.latex?g_2:x=1">.

<img src="https://latex.codecogs.com/svg.latex?\boxed{5.}"> Поведение на функцията <img src="https://latex.codecogs.com/svg.latex?f(x)"> и екстремуми (знак на <img src="https://latex.codecogs.com/svg.latex?f'(x)">):

![](https://github.com/andy489/Data_Structures_and_Algorithms_CPP/blob/master/assets/Graphic%2003.png)

<img src="https://latex.codecogs.com/svg.latex?x\in{(-\infty{,-2})}:f(x)=\frac{\sqrt{1-x-2}}{1+x}=\frac{1}{-\sqrt{-1-x}}=\frac{-1}{\sqrt{-(x+1)}}">.

<img src="https://latex.codecogs.com/svg.latex?f'(x)=\frac{(-1)'.\sqrt{-(x+1)}-(-1).(\sqrt{-(x+1)})'}{-(x+1)}=\\=\frac{(-(x+1)^{\frac{1}{2}})'}{-(x+1)}=\frac{-1}{2(-x-1)^{\frac{3}{2}}}<0">

<img src="https://latex.codecogs.com/svg.latex?\Rightarrow{f(x)}"> е намаляваща в <img src="https://latex.codecogs.com/svg.latex?(-\infty{,-2})">.

<img src="https://latex.codecogs.com/svg.latex?x\in{[-2{,-1})}:f(x)=\frac{\sqrt{1+x+2}}{1-(-x)}=\frac{\sqrt{x+3}}{x+1}">.

<img src="https://latex.codecogs.com/svg.latex?f'(x)=\frac{(\sqrt{x+3})'.(x+1)-\sqrt{x+3}.(x+1)'}{(x+1)^2}=\frac{\frac{1}{2}.\frac{x+1}{\sqrt{x+3}}-\sqrt{x-3}}{(x+1)^2}=\frac{x+1-2(x+3)}{2\sqrt{x+3}(x+1)^2}=\frac{-x-5}{2.\sqrt{x+3}(x+1)^2}<0\Rightarrow{f(x)}"><br>е намаляваща в <img src="https://latex.codecogs.com/svg.latex?[-2,-1)">

<img src="https://latex.codecogs.com/svg.latex?x\in{(-1,0)}:f'(x)=\frac{-x-5}{2\sqrt{x+3}(x+1)^2}<0\Rightarrow{f(x)}"><br>е намаляваща в <img src="https://latex.codecogs.com/svg.latex?(-1,0)">

<img src="https://latex.codecogs.com/svg.latex?x\in{[0,1)}:f(x)=\frac{\sqrt{1+x+2}}{1-x}=\frac{\sqrt{x+3}}{1-x}">.

<img src="https://latex.codecogs.com/svg.latex?f'(x)=\frac{(\sqrt{x+3})'(1-x)-(\sqrt{x+3})(1-x)'}{(1-x)^2}=\frac{\frac{1-x}{2\sqrt{x+3}}\sqrt{x+3}}{(1-x)^2}=\\=\frac{1-x+2x+6}{2(1-x)^2\sqrt{x+3}}=\frac{x+7}{2(1-x)^2\sqrt{x+3}}>0\Rightarrow{f(x)}"><br>е растяща в <img src="https://latex.codecogs.com/svg.latex?[0,1)">
