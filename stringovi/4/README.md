Да се напише програма која што од стандарден влез ќе прочита една низа од карактери и ќе одреди и ќе испечати на
стандарден излез:

- релативната фреквенција на сите мали букви
- релативната фреквенција на сите големи букви

Релативната фреквенција на даден(и) карактер(и) се пресметува како количник на вкупното појавување на тој/тие
карактер/и со вкупниот број на карактери во текстот (да се игнорираат празните места и специјалните знаци).

```C++
Влез:
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Suspendisse efficitur tempus enim, id imperdiet nisl rhoncus et. Nunc aliquam suscipit ex eget tincidunt. Nullam finibus ipsum congue, tempus quam et, condimentum diam. MAECENAS COMMODO est NIBH, ac condimentum neque ultrices in. Donec varius lectus nibh. Praesent quis turpis quis purus venenatis condimentum id molestie erat. In viverra dignissim congue. Sed sit amet malesuada metus, ut egestas massa. Vivamus pretium, dui at hendrerit pharetra, nunc augue dignissim lorem, in suscipit tortor ligula quis tellus. Sed porttitor enim non faucibus facilisis. Phasellus accumsan tincidunt est, quis imperdiet mauris commodo vel. Aliquam erat volutpat. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Vestibulum vestibulum massa suscipit quam mollis, quis hendrerit quam tempor. In feugiat viverra condimentum. Donec volutpat est enim, ut malesuada libero pulvinar vel. In hac habitasse.#

Излез:
0.0455 --> големи
0.9545 --> мали
```