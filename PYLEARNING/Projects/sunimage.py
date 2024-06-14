from PIL import Image, ImageDraw
import math

# Create a new image with a white background
image = Image.new('RGB', (800, 800), 'white')
draw = ImageDraw.Draw(image)

# Draw a symbolic representation of divinity
# Central light burst
center_x, center_y = 400, 400
for i in range(200, 0, -1):
    draw.ellipse((center_x - i, center_y - i, center_x + i, center_y + i), outline=(255, 223, 0, 128))

# Rays of light emanating from the center
for i in range(0, 360, 15):
    length = 300
    end_x = center_x + length * math.cos(math.radians(i))
    end_y = center_y + length * math.sin(math.radians(i))
    draw.line((center_x, center_y, end_x, end_y), fill=(255, 223, 0, 128), width=3)

# Add an ethereal cloud effect around the light
for i in range(5):
    offset_x = center_x + i * 20
    offset_y = center_y + i * 20
    draw.ellipse((offset_x - 250, offset_y - 250, offset_x + 250, offset_y + 250), outline=(255, 255, 255, 64))

image.show()
