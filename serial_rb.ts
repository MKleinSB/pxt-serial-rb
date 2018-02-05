namespace serial_rb {
    /**
    * Reads multiple characters from the receive buffer and fills a user buffer.
    * @param length default buffer length, eg: 64
    */
    //% weight=89 blockGap=8
    //% blockId=serial_readbuffer block="serial|read buffer %length"
    //% help=serial/read-buffer advanced=true weight=5
        export function readBuffer(length: number): Buffer;
    }
