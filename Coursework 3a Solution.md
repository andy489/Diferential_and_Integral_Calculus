## Курсова задача 3а

Като използвате подходящо развитие в степенен ред на подинтегралната функция, пресметнете с точност <img src="https://latex.codecogs.com/svg.latex?E=10^{-4}"> определения интеграл:
<img src="https://latex.codecogs.com/svg.latex?\int_{0}^{\frac{1}{3}}\frac{ln(1+x^3)}{x}dx">.

*Решение:*

От формулата на Маклорен знаем, че за <img src="https://latex.codecogs.com/svg.latex?|x|<1:ln(1+x)=\sum_{k=1}^{\infty}\frac{(-1)^{k-1}.x^k}{k}=x-\frac{x^2}{2}+\frac{x^3}{3}-\frac{x^4}{4}+\cdots"><br>
<img src="https://latex.codecogs.com/svg.latex?\Rightarrow{\frac{ln(1+x^3)}{x}}=\bigg(\sum_{k=1}^{\infty}\frac{(-1)^{k-1}.x^{3k}}{k}\bigg).\frac{1}{x}=\sum_{k=1}^{\infty}\frac{(-1)^{k-1}.x^{3k-1}}{k}">.

<img src="https://latex.codecogs.com/svg.latex?\int_{0}^{\frac{1}{3}}\frac{ln(1+x^3)}{x}dx=\int_{0}^{\frac{1}{3}}\sum_{k=1}^{\infty}\frac{(-1)^{k-1}.x^{3k-1}}{k}dx=\sum_{k=1}^{\infty}\int_{0}^{\frac{1}{3}}\frac{(-1)^{k-1}.x^{3k-1}}{k}=\sum_{k=1}^{\infty}\frac{(-1)^{k-1}}{k}.\frac{x^{3k}}{3k}\bigg|_{0}^{\frac{1}{3}}=\sum_{k=1}^{\infty}\frac{(-1)^{k-1}}{k.3k.3^{3k}}=\sum_{k=1}^{n}\frac{(-1)^{k-1}}{k^2.3^{3k+1}}+\underbrace{\sum_{k=n+1}^{\infty}\frac{(-1)^{k-1}}{k^2.3^{3k+1}}}_{r_n(x)}">.

Искаме <img src="https://latex.codecogs.com/svg.latex?|r_n(x)|<10^{-4}">. Следователно търсим такова 
<img src="https://latex.codecogs.com/svg.latex?n">, за което е изпълнено: 

<img src="https://latex.codecogs.com/svg.latex?\bigg|\sum_{k=n+1}^{\infty}\frac{(-1)^{k-1}}{k^2.3^{3k+1}}\bigg|<10^{-4}">. Но

<img src="https://latex.codecogs.com/svg.latex?\bigg|\sum_{k=n+1}^{\infty}\frac{(-1)^{k-1}}{k^2.3^{3k+1}}\bigg|=|a_{n+1}-a_{n+2}+a_{n+3}-a_{n+4}+\cdots|="><br><img src="https://latex.codecogs.com/svg.latex?=|a_{n+1}-(\underbrace{a_{n+2}-a_{n+3}}_{>0})-(\underbrace{a_{n+4}-a_{n+5}}_{>0})-\cdots|">, където 
<img src="https://latex.codecogs.com/svg.latex?a_n=\frac{1}{n^2.3^{3n+1}}">.

Тъй като редицата <img src="https://latex.codecogs.com/svg.latex?a_n"> е монотонна <img src="https://latex.codecogs.com/svg.latex?\{a_n\}\searrow{0}\Rightarrow{\bigg|\sum_{k=n+1}^{\infty}\frac{(-1)^{k-1}}{k^2.3^{3k+1}}\bigg|<|a_{n+1}|=\frac{1}{(n+1)^2.3^{3n+4}}}<\frac{1}{10^{4}}">.

<img src="https://latex.codecogs.com/svg.latex?(n+1)^2.3^{3n+4}>10^4">. За <img src="https://latex.codecogs.com/svg.latex?n=2:{\;}9.3^{10}=531441>10{\;}000\Rightarrow">

<img src="https://latex.codecogs.com/svg.latex?\int_{0}^{\frac{1}{3}}\frac{ln(1+x^3)}{x}dx\sim{\frac{1}{3^4}}-\frac{1}{4.3^7}=\frac{1}{81}\bigg(1-\frac{1}{108}\bigg)=\frac{107}{81.108}=\underline{0,0122}31367...">. 




\sum_{k=n+1}^{\infty}\frac{(-1)^{k-1}}{k^2.3^{3k+1}}

<img src="https://latex.codecogs.com/svg.latex?">
