import qrcode #needs "pip install qrcode[pil]"

# Your web link
url = "http://92.18.181.48/Astra/user_form_wip.php"

# Generate QR code
qr = qrcode.QRCode(
    version=1,
    error_correction=qrcode.constants.ERROR_CORRECT_L,
    box_size=10,
    border=4,
)
qr.add_data(url)
qr.make(fit=True)

# Create an image from the QR Code instance
img = qr.make_image(fill_color="white", back_color="black")

# Save the image
img.save("my_qr_code.png")

print("QR code generated and saved as 'my_qr_code.png'")
