## Курсова задача 2

62. <img src="https://latex.codecogs.com/svg.latex?f(x)=\frac{\sqrt{1+|x+2|}}{1-|x|}">

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

<img src="https://latex.codecogs.com/svg.latex?\underline{x\in{(-\infty{,-2})}}:f(x)=\frac{\sqrt{1-x-2}}{1+x}=\frac{1}{-\sqrt{-1-x}}=\frac{-1}{\sqrt{-(x+1)}}">.

<img src="https://latex.codecogs.com/svg.latex?f'(x)=\frac{(-1)'.\sqrt{-(x+1)}-(-1).(\sqrt{-(x+1)})'}{-(x+1)}=\\=\frac{(-(x+1)^{\frac{1}{2}})'}{-(x+1)}=\frac{-1}{2(-x-1)^{\frac{3}{2}}}<0">

<img src="https://latex.codecogs.com/svg.latex?\Rightarrow{f(x)}"> е намаляваща в <img src="https://latex.codecogs.com/svg.latex?(-\infty{,-2})">.

<img src="https://latex.codecogs.com/svg.latex?\underline{x\in{[-2{,-1})}}:f(x)=\frac{\sqrt{1+x+2}}{1-(-x)}=\frac{\sqrt{x+3}}{x+1}">.

<img src="https://latex.codecogs.com/svg.latex?f'(x)=\frac{(\sqrt{x+3})'.(x+1)-\sqrt{x+3}.(x+1)'}{(x+1)^2}=\frac{\frac{1}{2}.\frac{x+1}{\sqrt{x+3}}-\sqrt{x-3}}{(x+1)^2}=\frac{x+1-2(x+3)}{2\sqrt{x+3}(x+1)^2}=\frac{-x-5}{2.\sqrt{x+3}(x+1)^2}<0\Rightarrow{f(x)}"><br>е намаляваща в <img src="https://latex.codecogs.com/svg.latex?[-2,-1)">

<img src="https://latex.codecogs.com/svg.latex?\underline{x\in{(-1,0)}}:f'(x)=\frac{-x-5}{2\sqrt{x+3}(x+1)^2}<0\Rightarrow{f(x)}"><br>е намаляваща в <img src="https://latex.codecogs.com/svg.latex?(-1,0)">

<img src="https://latex.codecogs.com/svg.latex?\underline{x\in{[0,1)}}:f(x)=\frac{\sqrt{1+x+2}}{1-x}=\frac{\sqrt{x+3}}{1-x}">.

<img src="https://latex.codecogs.com/svg.latex?f'(x)=\frac{(\sqrt{x+3})'(1-x)-(\sqrt{x+3})(1-x)'}{(1-x)^2}=\frac{\frac{1-x}{2\sqrt{x+3}}\sqrt{x+3}}{(1-x)^2}=\\=\frac{1-x+2x+6}{2(1-x)^2\sqrt{x+3}}=\frac{x+7}{2(1-x)^2\sqrt{x+3}}>0\Rightarrow{f(x)}"><br>е растяща в <img src="https://latex.codecogs.com/svg.latex?[0,1)">

<img src="https://latex.codecogs.com/svg.latex?\underline{x\in{(1,+\infty)}}:f'(x)=\frac{x+7}{2(1-x)^2\sqrt{x+3}}>0\Rightarrow{f(x)}"><br>е растяща в <img src="https://latex.codecogs.com/svg.latex?(1,+\infty)">.

![](https://github.com/andy489/Data_Structures_and_Algorithms_CPP/blob/master/assets/Graphic%2004.png)

<img src="https://latex.codecogs.com/svg.latex?\boxed{6.}"> Вдлъбнатост/изпъкналост на функцията <img src="https://latex.codecogs.com/svg.latex?f(x)"> (знак на <img src="https://latex.codecogs.com/svg.latex?f''(x)">):<br>

<img src="https://latex.codecogs.com/svg.latex?\underline{x\in{(-\infty{,-2})}}:f''(x)=-\frac{1}{2}.\bigg(\frac{1}{(-x-1)^{\frac{3}{2}}}\bigg)'=\\=-\frac{1}{2}.\bigg(\frac{-1'.(-x-1)^{\frac{3}{2}}-1\big((-x-1)^{\frac{3}{2}}\big)'}{-(x+1)^3}\bigg)=-\frac{1}{2}.(-1).\frac{3}{2}\frac{(-x-1)^{\frac{3}{2}-1}.(-x-1)'}{-(x+1)^3}=">

<img src="https://latex.codecogs.com/svg.latex?=\frac{3}{4}.\frac{1}{(-x-1)^{\frac{5}{2}}}(-1)=-\frac{3}{4}.\frac{1}{(-x-1)^{\frac{5}{2}}}<0\Rightarrow{f(x)}"> е вдлъбната в <img src="https://latex.codecogs.com/svg.latex?(-\infty{,-2})">.

<img src="https://latex.codecogs.com/svg.latex?\underline{x\in{[-2{,-1})}}:f''(x)=\frac{1}{2}\bigg(\frac{-x-5}{\sqrt{x+3}(x+1)^2}\bigg)=\\=\frac{1}{2}.\frac{(-1).\sqrt{x+3}(x+1)^2+(x+5).(\sqrt{x+3}(x+1)^2)'}{(x+3)(x+1)^4}=\\=\frac{-\sqrt{x+3}(x+1)^2+(x+5)\bigg(\frac{(1+0)(x+1)^2}{2\sqrt{x+3}}+2(1+0)(x+1)\sqrt{x+3}\bigg)}{2(x+1)^4(x+3)}=\\=\frac{3x^2+30x+59}{4(x+1)^3.(x+3)^{\frac{3}{2}}}<0\Rightarrow{f(x)}"><br> е вдлъбната в <img src="https://latex.codecogs.com/svg.latex?[-2,-1)">.

<img src="https://latex.codecogs.com/svg.latex?\underline{x\in{(-1{,0})}}:f''(x)=\frac{3x^2+30x+59}{4(x+1)^3.(x+3)^{\frac{3}{2}}}>0\Rightarrow{f(x)}"><br> е изпъкнала в <img src="https://latex.codecogs.com/svg.latex?(-1,0)">

<img src="https://latex.codecogs.com/svg.latex?\underline{x\in{[-0{,1})}}:f''(x)=\frac{(x+7)'.2(1-x)^2\sqrt{x+3}-2(x+7)\big((1-x)^2\sqrt{x+3}\big)'}{4(1-x)^4(x+3)}=\\=\frac{2(1-x)^2\sqrt{x+3}-2(x+7)\bigg(2(1-x).(-1)+\frac{(1-x)^2}{2\sqrt{x+3}}\bigg)}{4(1-x)^4(x+3)}=\\=\frac{2(1-x)^2\sqrt{x+3}-(x+7)\bigg(\frac{-4(1-x)\sqrt{x+3}+(1-x)^2}{2\sqrt{x+3}}\bigg)}{4(1-x)^4.(x+3)}=\\=\frac{(1-x)^2\sqrt{x+3}-(x+7)\bigg(-2(1-x)+\frac{(1-x)^2}{2\sqrt{x+3}}\bigg)}{2(1-x)^4(x+3)}=\\=-\frac{3x^2+42X+83}{4(x-1)^3(x+3)^{\frac{3}{2}}}>0\Rightarrow{f(x)}"><br> е изпъкнала в интервала <img src="https://latex.codecogs.com/svg.latex?[0,1)">

<img src="https://latex.codecogs.com/svg.latex?\underline{x\in{(1{,+\infty})}}:f''(x)=-\frac{3x^2+30x+59}{4(x+1)^3.(x+3)^{\frac{3}{2}}}<0\Rightarrow{f(x)}"> е вдлъбната в <img src="https://latex.codecogs.com/svg.latex?(1,+\infty)">

![](https://github.com/andy489/Data_Structures_and_Algorithms_CPP/blob/master/assets/Graphic%2005.png)

<img src="https://latex.codecogs.com/svg.latex?\boxed{7.}"> „Специални“ точки и уравнение на допирателна във всяка от тях:

<img src="https://latex.codecogs.com/svg.latex?f(0)=\sqrt{3}"> и <img src="https://latex.codecogs.com/svg.latex?0"> e инфлексна точка, тъй като <img src="https://latex.codecogs.com/svg.latex?f'(x)"> сменя знака си в <img src="https://latex.codecogs.com/svg.latex?x_0=0">.

Правата с уравнение <img src="https://latex.codecogs.com/svg.latex?y=f(a)+f'(a)(x-a)"> e допирателна към <img src="https://latex.codecogs.com/svg.latex?\Gamma_{f(x)}"> в точката <img src="https://latex.codecogs.com/svg.latex?\big(a,f(a)\big)">.

За <img src="https://latex.codecogs.com/svg.latex?a=0^-">, т.е. т.<img src="https://latex.codecogs.com/svg.latex?(0^-,\sqrt{3})"> имаме (от т.5): 

<img src="https://latex.codecogs.com/svg.latex?y=f(0)+\frac{-0-5}{2\sqrt{0+3}(0+1)^2}.(x-0)=\sqrt{3}-\frac{5}{2\sqrt{3}}x=\sqrt{3}-\frac{5\sqrt{3}}{6}x">. Аналогично за <img src="https://latex.codecogs.com/svg.latex?a=0^+">, т.е. т.<img src="https://latex.codecogs.com/svg.latex?(0^+,\sqrt{3})">:<br><img src="https://latex.codecogs.com/svg.latex?y=f(0)+\frac{0+7}{2(1-0)^2\sqrt{0+3}}.(x-0)=\sqrt{3}+\frac{7}{2\sqrt{3}}x=\sqrt{3}+\frac{7\sqrt{3}}{6}x">.

Въпреки, че <img src="https://latex.codecogs.com/svg.latex?x_0=-2"> не е инфлексна точка, може да я считаме за „специална“, защото в т.<img src="https://latex.codecogs.com/svg.latex?(-2,-1),\Gamma_{f(x)}"> започва да намалява още по-бързо (сменя „скоростта/порядъка“ на намаляване).

За <img src="https://latex.codecogs.com/svg.latex?a=-2^-:y=f(-2)+\frac{-1}{2(-(-2)-1)^{\frac{3}{2}}}.(x-(-2))=">

<img src="https://latex.codecogs.com/svg.latex?=-1-\frac{1}{2.1^{\frac{3}{2}}}.(x+2)=-\frac{x}{2}-2.">

За <img src="https://latex.codecogs.com/svg.latex?a=-2^+:y=f(-2)+\frac{-(-2)-5}{2\sqrt{-2+3}(-2+1)^2}.(x-(-2))=">

<img src="https://latex.codecogs.com/svg.latex?=-1-\frac{3}{2\sqrt{1}(-1)^2}(x+2)=-1-\frac{3x+6}{2}=-\frac{3}{2}x=4">.