v 20130925 2
C 40000 40000 0 0 0 title-B.sym
C 43900 42900 1 90 0 resistor-2.sym
{
T 43550 43300 5 10 0 0 90 0 1
device=RESISTOR
T 44300 43600 5 10 1 1 180 0 1
refdes=R5
T 44000 43100 5 10 1 1 0 0 1
value=1k
}
C 40700 44800 1 0 0 input-1.sym
{
T 40700 45100 5 10 0 0 0 0 1
device=INPUT
T 40700 44800 5 10 1 1 0 0 1
refdes=IN1
}
C 45800 46200 1 180 1 output-1.sym
{
T 45900 45900 5 10 0 0 180 6 1
device=OUTPUT
T 46000 46200 5 10 1 1 180 6 1
refdes=OUT1
}
C 42200 43800 1 90 0 resistor-2.sym
{
T 41850 44200 5 10 0 0 90 0 1
device=RESISTOR
T 41900 44500 5 10 1 1 180 0 1
refdes=R2
T 41600 44100 5 10 1 1 0 0 1
value=1M
}
C 43900 41600 1 90 0 resistor-2.sym
{
T 43550 42000 5 10 0 0 90 0 1
device=RESISTOR
T 43600 42400 5 10 1 1 180 0 1
refdes=R3
T 43300 41900 5 10 1 1 0 0 1
value=56k
}
C 45400 46300 1 180 0 capacitor-1.sym
{
T 45200 45600 5 10 0 0 180 0 1
device=CAPACITOR
T 44600 46200 5 10 1 1 0 0 1
refdes=C3
T 45200 45400 5 10 0 0 180 0 1
symversion=0.1
T 45500 46400 5 10 1 1 180 0 1
value=0.1u
}
C 43700 46500 1 90 0 resistor-2.sym
{
T 43350 46900 5 10 0 0 90 0 1
device=RESISTOR
T 43400 47200 5 10 1 1 180 0 1
refdes=R1
T 43000 46800 5 10 1 1 0 0 1
value=56k
}
C 43900 40900 1 0 1 gnd-1.sym
C 41200 42900 1 0 0 triode.sym
{
T 44000 45700 5 10 1 1 0 0 1
refdes=U2
T 43900 45400 5 10 1 1 0 0 1
value=12ax7
T 43600 45000 5 10 0 1 0 0 1
device=TRIODE
}
C 43400 47700 1 0 0 generic-power-1.sym
{
T 43400 48000 5 10 1 1 0 0 1
refdes=Vcc1
T 43900 48000 5 10 1 1 0 0 1
value=240V
T 43400 47700 5 10 0 0 0 0 1
device=POWER
}
N 41500 44900 42800 44900 4
N 42100 44700 42100 44900 4
N 43800 44200 43800 43800 4
N 43800 42900 43800 42500 4
N 43800 41600 43800 41200 4
N 43800 42700 42100 42700 4
N 42100 42700 42100 43800 4
N 43600 47700 43600 47400 4
N 43600 46500 43600 45700 4
N 44500 46100 43600 46100 4
N 45800 46100 45400 46100 4