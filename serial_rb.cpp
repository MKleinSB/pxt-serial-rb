#include "pxt.h"

#define MICROBIT_SERIAL_READ_BUFFER_LENGTH 64

//% weight=2 color=#002050 icon="\uf287"
namespace serial_rb {
    // note that at least one // followed by % is needed per declaration!
    /**
     * Reads multiple characters from the receive buffer and fills a user buffer.
     * @param length default buffer length, eg: 64
     */
    //% blockId=serial_readbuffer block="serial_rb|read buffer %length"
    //% help=serial/read-buffer advanced=true weight=5
    Buffer readBuffer(int length) {
      if (length <= 0)
        length = MICROBIT_SERIAL_READ_BUFFER_LENGTH;
        
      ManagedBuffer buf(length);
      int read = uBit.serial.read(buf.getBytes(), buf.length());
      if (read != buf.length())
        buf = buf.slice(read);

      return buf.leakData();
    }
}
