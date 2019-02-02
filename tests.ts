let item: Buffer = null
basic.forever(() => {
    item = serial_rb.readBuffer(64)
})
