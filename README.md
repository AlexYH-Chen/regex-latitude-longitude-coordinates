# Regular Expression for Latitude/Longitude Coordinates
Simple C++ code for detecting valid latitude and longitude pairs

## Table of contents
* [General info](#general-info)
* [Technologies](#technologies)
* [Example of use](#example)

## General info
This project is created for detecting valid latitude and longitude pairs
	
## Technologies
Project is created with:
* C++ 11

## Example of use
Input constraints:\
They will not contain any symbols for degrees or radians or N/S/E/W. There may or may not be a +/- sign preceding X or Y.\
There will be a space between Y and the comma before it.\
There will be no space between X and the preceding left-bracket, or between Y and the following right-bracket.\
There will be no unnecessary zeros (0) before X or Y.\
\
The following would be considered valid:\
(75, 180)\
(+90.0, -147.45)\
(77.11112223331, 149.99999999)\
(+90, +180)\
(90, 180)\
(-90.00000, -180.0000)\
\
\
The following would be considered invalid:\
(75, 280)\
(+190.0, -147.45)\
(77.11112223331, 249.99999999)\
(+90, +180.2)\
(90., 180.)\
(-090.00000, -180.0000)\
\
