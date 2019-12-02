# pc4

Desarrollo de la pc4
#
Primero, me concentré en entender el código, especialmente cuál era la función de decoder y encoder.
Después, una vez que entendí el código, ya que las funciones con las cuales se convertían a pixeles la imagen y se volvía a pasar a una imagen. Puesto que, las funciones ya estaban planteadas.
Más tarde, una vez que logré armar la función del filtro de color con cada imagen a partir de las instrucciones dadas en la separata del examen, intenté analizar de modo que se pueda hacer más corta y simple.
Finalmente, investigué sobre cómo rotar la imagen y hallé que para rotarla debía rotar, variar, el valor de cada x, y de cada pixel, de modo que roten de manera simultánea, pero su valor se mantenga. Entonces, apliqué la transformación lineal de rotación con la matriz dada en la página proporcionada.

#
Implementación de threads
#
Con respecto a los threads, no me quise complicar mucho e implementé threads en el main para llamar a cada función. Asimismo, me di cuenta que esa implementación era muy simple, entonces luego de investigar y ver algunos videos se me ocurrió implementar threads en las mismas funciones que desarrollaban las imágenes cambiadas. Para no complicarme mucho y entrenar mis conocimientos de threads, hice una función más por cada función que tenía con respecto a la variación de la imagen y en esta llamaba a la función principal, la cual hacía todos los calculos para que cambie la imagen.

Fue un examen duro, pero considero que se logró el objetivo.
