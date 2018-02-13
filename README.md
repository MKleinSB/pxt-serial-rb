# serial_rb

This PXT package allows the Calliope Mini to read into a buffer from serial or write a buffer to serial. This is not serious, I am just testing my understanding of how PXT packages work. Everything was done by hand (even the files that claim auto-generation) because I am still setting up my environment.

This will becode obsolete as soon as the Calliope folks refresh their serial.cpp which (I think) should already include serial.readBuffer and serial.writeBuffer, because this code is present in the serial.cpp from microbit and there are no hardware dependencies.

Nonetheless, this works. It was tested with reading binary data stream from SDS011 air quality sensor.

## Usage

You have to use the makecode.calliope.cc editor and import this as a package. After importing you may have to wait a minute or two for the new blocks to show up: you will get a new 'serial-rb' block on the left with the serial.readBuffer and writeBuffer commands. You have to read into a variable e.g.
    InputBuffer = serial_rb.readBuffer(1)
and then you can show what you read from serial on the Calliope LED matrix with
    basic.showNumber(InputBuffer.getNumber(NumberFormat.Int8LE, 0))

## Known Issues

You may see an error message "cannot read property 'readBuffer' of undefined in a red box. This does not affect the package from working. If you know, how I can get rid of this, let me know.

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
