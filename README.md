Cifra Xor
=========

Vamos começar com a cifra mais simples. Basicamente a cifra + é uma cifra aditiva. Esta cifra
permite somente aplicar a chave nos dados para criptografá-lo, e reaplicar a mesma chave para
descriptografar os mesmos dados.
Ela opera com os seguintes princípios:
1. A + 0 = A
2. A + A = 0
3. (A + B) + C = A + (B + C)
4. A + (A + B) = B + 0 = B
A tabela verdade da porta lógica + é a seguinte


| A | B | Saída |
|---|---|-------|
| 0 | 0 | 0     |
| 0 | 1 | 1     |
| 1 | 0 | 1     |
| 1 | 1 | 0     |


Problema
--------
Um grupo de soldados foram cercados e necessitam, para sua salvação, enviar uma mensagem por
rádio à sua base, para conseguir reforços. Os inimigos possuem receptores e podem capturar às
mensagens OTA. O grupo cerceado necessita construir uma máquina para criptografar e enviar uma
mensagem que não revele seus planos aos inimigos.

Considerando a seguinte mensagem "a simple message" comutado com 'w', o retorno esperado é:

[0] 22 char

[1] 87'W' char

[2] 4 char

[3] 30 char

[4] 26 char

[5] 7 char

[6] 27 char

[7] 18 char

[8] 87 'W' char

[9] 26 char

[10] 18 char

[11] 4 char

[12] 4 char

[13] 22 char

[14] 16 char

[15] 18 char

Pontos positivos
----------------
* +Todos que opiniram participaram da solução.
* +Linguagem diferente.

Pontos negativos
----------------
* -Muito focado em particularidades da linguagem/ide e pouco na solução.
* -Faltou entradas e saídas para implementar os test cases.
* -Nem todo mundo presente participou na solução.
* -Comentários da platéia fora da hora (teste quebrado) atrapalhando os pilotos/co-pilotos.
* -Não foi mostrado os pontos negativos antes do início do dojo
* -Não foi gravada a sessão

Sugestões
---------
* Sortear a ordem dos pilotos/co-pilotos.

Implementações
----------
No **próximo coding dojo de C++** serão apresentadas as soluções. 


**Referências**: 
* https://en.wikipedia.org/wiki/XOR_cipher
* http://www.tech-faq.com/xor-encryption.html
* http://www.cprogramming.com/tutorial/xor.html
* http://apoie.org/Dojo.html