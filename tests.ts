let item: Buffer = null
basic.forever(() => {
    item = serial.readBuffer(64)
})
