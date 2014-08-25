#!/usr/bin/env python2.7

import PIL.Image as Image
import sys
import os
import struct

im = Image.open(sys.argv[1])
#print im.format, im.size, im.mode

xr, yr = im.size
cy = 0
lines = []
while cy < yr:
	line = []
	for x in range(xr):
		byte = 0
		for y in range(8):
			ay = cy+y
			p = im.getpixel((x,ay))
			byte += p << (7-y)
			#print x,ay,p, "0x%02X"%byte
		line.append(byte)
	cy += 8
	lines.append(line)

print "static const uint32_t LOGO_SIZE = %d;"%(xr*yr/8)
print "static const uint8_t  LOGO[] = {"
for j in range(len(lines)):
	line = lines[j]
	for i in range(len(line)):
		b = line[i]
		print "0x%02x,"%b,
		if (i+1)%16==0:
			print
	print 
print "};\n\n"
