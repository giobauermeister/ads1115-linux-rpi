<img src="https://www.embarcados.com.br/wp-content/uploads/2016/04/logo-380x124.png" width="266" height="87" href="https://www.embarcados.com.br">

## Analog to digital converter ADS1115 with Raspberry Pi

<img src="https://www.embarcados.com.br/wp-content/uploads/2019/04/capa-artigo-696x418.png" width="556" height="334" href="https://www.embarcados.com.br">

#### Go to full tutorial in portuguese about ADS1115 at <span style="color:#FF8000"></span>[Portal Embarcados](https://www.embarcados.com.br/raspberry-pi-e-ads1115/) and learn how to use ADS1115 with Raspberry Pi and C language.

______________________

Instructions for compiling and running ads1115_example.c

1 - Clone this repository to your Raspberry Pi

```shell 
$ git clone  https://github.com/giobauermeister/ads1115-linux-rpi.git
```

2 - Go into the cloned folder

```shell 
$ cd ads1115-linux-rpi/
```

3 - Run gcc to compile the example

```shell 
$ gcc ads1115_example.c ads1115_rpi.c -o ads1115_example
```

4 - Run the example

```shell 
$ ./ads1115_example
```

The example reads from analog inputs A0, A1, A2 and prints the voltage values to the console.
You can use the following circuit with this example:

![Schematic](https://www.embarcados.com.br/wp-content/uploads/2019/04/circuito-680x418.png)
