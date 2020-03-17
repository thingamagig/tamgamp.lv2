v 20130925 2
C 40000 40000 0 0 0 title-B.sym
C 40800 45700 1 0 0 input-1.sym
{
T 40800 46000 5 10 0 0 0 0 1
device=INPUT
T 40800 45700 5 10 1 1 0 0 1
refdes=IN1
}
C 45200 48000 1 180 1 output-1.sym
{
T 45300 47700 5 10 0 0 180 6 1
device=OUTPUT
T 45400 48000 5 10 1 1 180 6 1
refdes=OUT1
}
C 44200 48300 1 90 0 resistor-2.sym
{
T 43850 48700 5 10 0 0 90 0 1
device=RESISTOR
T 43900 49000 5 10 1 1 180 0 1
refdes=R2
T 43500 48500 5 10 1 1 0 0 1
value=100k
}
C 43100 44500 1 90 0 resistor-2.sym
{
T 42750 44900 5 10 0 0 90 0 1
device=RESISTOR
T 42700 45200 5 10 1 1 180 0 1
refdes=R3
T 42400 44600 5 10 1 1 0 0 1
value=470k
}
C 44500 44500 1 270 0 capacitor-1.sym
{
T 45200 44300 5 10 0 0 270 0 1
device=CAPACITOR
T 45000 44400 5 10 1 1 180 0 1
refdes=C5
T 45400 44300 5 10 0 0 270 0 1
symversion=0.1
T 44800 43700 5 10 1 1 0 0 1
value=1u
}
C 44000 43600 1 90 0 resistor-2.sym
{
T 43650 44000 5 10 0 0 90 0 1
device=RESISTOR
T 43700 44300 5 10 1 1 180 0 1
refdes=R1
T 43300 43800 5 10 1 1 0 0 1
value=1.5k
}
C 42800 45900 1 180 0 resistor-2.sym
{
T 42400 45550 5 10 0 0 180 0 1
device=RESISTOR
T 42200 46000 5 10 1 1 0 0 1
refdes=R4
T 42500 45600 5 10 1 1 180 0 1
value=220k
}
C 43100 42900 1 0 1 gnd-1.sym
C 41700 43800 1 0 0 triode.sym
{
T 44500 46600 5 10 1 1 0 0 1
refdes=U2
T 44400 46300 5 10 1 1 0 0 1
value=12ax7
T 44100 45900 5 10 0 1 0 0 1
device=TRIODE
}
C 43900 49500 1 0 0 generic-power-1.sym
{
T 43900 49800 5 10 1 1 0 0 1
refdes=Vcc1
T 44400 49800 5 10 1 1 0 0 1
value=200V
T 43900 49500 5 10 0 0 0 0 1
device=POWER
}
N 44100 48300 44100 46600 4
N 43300 45800 42800 45800 4
N 41900 45800 41600 45800 4
N 44100 49200 44100 49500 4
N 44300 44500 44300 45100 4
N 43900 44500 44700 44500 4
N 43000 43400 44700 43400 4
N 43000 45400 43000 45800 4
N 43000 44500 43000 43200 4
N 45200 47900 44100 47900 4
N 43900 43600 43900 43400 4
N 44700 43600 44700 43400 4