# serial_rb

This PXT package allows the Calliope Mini to read into a buffer from serial. This is not serious, I am just testing my understanding of how PXT packages work. 

This will becode obsolete as soon as the Calliope folks refresh their serial.cpp which should already include serial.readBuffer, because this code is present in the serial.cpp from microbit and there are no hardware dependencies.

Nonetheless, this works. It was tested with reading binary data stream from SDS011 air quality sensor.

## Usage

You have to use the makecode.calliope.cc editor and import this as a package. Then you will get a new 'serial-rb' block on the left with the serial.readBuffer command. You have to read into a variable e.g.
    InputBuffer = serial_rb.readBuffer(1)
and then you can show what you read from serial on the Calliope LED matrix with
    basic.showNumber(InputBuffer.getNumber(NumberFormat.Int8LE, 0))

## Supported Platforms

This works with the Calliope Mini 2017

## Supported targets

* for PXT/microbit

(The metadata above is needed for package search.)

```package
serial
serial-rb=github:hhf42/pxt-serial-rb
```

## License

MIT
