v 20130925 2
C 40000 40000 0 0 0 title-B.sym
C 40500 47600 1 0 0 input-1.sym
{
T 40500 47900 5 10 0 0 0 0 1
device=INPUT
T 40500 47600 5 10 1 1 0 0 1
refdes=IN1
}
C 46100 48900 1 180 1 output-1.sym
{
T 46200 48600 5 10 0 0 180 6 1
device=OUTPUT
T 46300 48900 5 10 1 1 180 6 1
refdes=OUT1
}
C 45900 46200 1 90 1 capacitor-2.sym
{
T 45200 46000 5 10 0 0 270 2 1
device=POLARIZED_CAPACITOR
T 46100 46000 5 10 1 1 0 6 1
refdes=C3
T 45000 46000 5 10 0 0 270 2 1
symversion=0.1
T 46300 45400 5 10 1 1 0 6 1
value=3.3uF
}
C 45100 45300 1 90 0 resistor-2.sym
{
T 44750 45700 5 10 0 0 90 0 1
device=RESISTOR
T 44800 46100 5 10 1 1 180 0 1
refdes=R3
T 44500 45400 5 10 1 1 0 0 1
value=1.5k
}
C 44300 45300 1 90 0 resistor-2.sym
{
T 43950 45700 5 10 0 0 90 0 1
device=RESISTOR
T 44000 46100 5 10 1 1 180 0 1
refdes=R2
T 43700 45400 5 10 1 1 0 0 1
value=1M
}
C 43000 46200 1 270 0 capacitor-1.sym
{
T 43700 46000 5 10 0 0 270 0 1
device=CAPACITOR
T 43000 46100 5 10 1 1 180 0 1
refdes=C2
T 43900 46000 5 10 0 0 270 0 1
symversion=0.1
T 42600 45400 5 10 1 1 0 0 1
value=500pF
}
C 45400 44400 1 0 1 gnd-1.sym
C 42900 47300 1 180 0 capacitor-1.sym
{
T 42700 46600 5 10 0 0 180 0 1
device=CAPACITOR
T 42300 47300 5 10 1 1 0 0 1
refdes=C1
T 42700 46400 5 10 0 0 180 0 1
symversion=0.1
T 42700 46800 5 10 1 1 180 0 1
value=180pF
}
C 42900 48400 1 180 0 resistor-2.sym
{
T 42500 48050 5 10 0 0 180 0 1
device=RESISTOR
T 42300 48500 5 10 1 1 0 0 1
refdes=R1
T 42600 48100 5 10 1 1 180 0 1
value=1.5M
}
C 43300 44400 1 0 1 gnd-1.sym
C 45200 49000 1 90 0 resistor-2.sym
{
T 44850 49400 5 10 0 0 90 0 1
device=RESISTOR
T 45500 49700 5 10 1 1 180 0 1
refdes=R4
T 45200 49200 5 10 1 1 0 0 1
value=100k
}
C 44300 44400 1 0 1 gnd-1.sym
C 42700 45700 1 0 0 triode.sym
{
T 44700 48200 5 10 1 1 0 0 1
refdes=U1
T 45500 48000 5 10 1 1 0 0 1
value=12ax7
T 45100 47800 5 10 0 1 0 0 1
device=TRIODE
}
C 44900 50100 1 0 0 generic-power-1.sym
{
T 44900 50400 5 10 1 1 0 0 1
refdes=Vcc1
T 45400 50400 5 10 1 1 0 0 1
value=200V
T 44900 50100 5 10 0 0 0 0 1
device=POWER
}
N 42000 48300 42000 47100 4
N 42900 48300 42900 47100 4
N 41300 47700 42000 47700 4
N 44300 47700 42900 47700 4
N 42900 47700 43200 47700 4
N 43200 46200 43200 47700 4
N 44200 46200 44200 47700 4
N 43200 45300 43200 44700 4
N 44200 45300 44200 44700 4
N 45300 46200 45300 47000 4
N 45000 46200 45700 46200 4
N 45000 45300 45700 45300 4
N 45300 44700 45300 45300 4
N 45100 49000 45100 48500 4
N 45100 50100 45100 49900 4
N 45100 48800 46100 48800 4