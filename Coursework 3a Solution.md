## Курсова задача 3а

Като използвате подходящо развитие в степенен ред на подинтегралната функция, пресметнете с точност <img src="https://latex.codecogs.com/svg.latex?E=10^{-4}"> определения интеграл:
<img src="https://latex.codecogs.com/svg.latex?\int_{0}^{\frac{1}{3}}\frac{ln(1+x^3)}{x}dx">.

*Решение:*

От формулата на Маклорен знаем, че за <img src="https://latex.codecogs.com/svg.latex?|x|<1:ln(1+x)=\sum_{k=1}^{\infty}\frac{(-1)^{k-1}.x^k}{k}=x-\frac{x^2}{2}+\frac{x^3}{3}-\frac{x^4}{4}+\cdots"><br>
<img src="https://latex.codecogs.com/svg.latex?\Rightarrow{\frac{ln(1+x^3)}{x}}=\bigg(\sum_{k=1}^{\infty}\frac{(-1)^{k-1}.x^{3k}}{k}\bigg).\frac{1}{x}=\sum_{k=1}^{\infty}\frac{(-1)^{k-1}.x^{3k-1}}{k}">.

<img src="https://latex.codecogs.com/svg.latex?\int_{0}^{\frac{1}{3}}\frac{ln(1+x^3)}{x}dx=\int_{0}^{\frac{1}{3}}\sum_{k=1}^{\infty}\frac{(-1)^{k-1}.x^{3k-1}}{k}dx=\sum_{k=1}^{\infty}\int_{0}^{\frac{1}{3}}\frac{(-1)^{k-1}.x^{3k-1}}{k}=\sum_{k=1}^{\infty}\frac{(-1)^{k-1}}{k}.\frac{x^{3k}}{3k}\bigg|_{0}^{\frac{1}{3}}=\sum_{k=1}^{\infty}\frac{(-1)^{k-1}}{k.3k.3^{3k}}=\sum_{k=1}^{n}\frac{(-1)^{k-1}}{k^2.3^{3k+1}}+\underbrace{\sum_{k=n+1}^{\infty}\frac{(-1)^{k-1}}{k^2.3^{3k+1}}}_{r_n(x)}">.
