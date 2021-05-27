gerar(vader, luke).
gerar(vader, leia).
gerar(leia, kylo).

irmaos(X, Y):- gerar(Z, X), gerar(Z, Y).
avo(X, Y):- gerar(X, Z), gerar(Z, Y).
tio(X,Y) :-  irmaos(X, Z),  gerar(Z, Y).

jedi(luke).
jedi(obiwan).
jedi(yoda).

darkside(vader).

sith(vader).
sith(sidious).

/* mestre(X, Y) = X é mestre de Y */
mestre(yoda, obiwan) :- jedi(obiwan), jedi(yoda).
mestre(obiwan, luke) :- jedi(luke), jedi(obiwan).
mestre(yoda, luke) :- jedi(luke), jedi(yoda).
mestre(sidious, vader) :- sith(sidious), sith(vader).

combate(X, Y):- jedi(X), sith(Y).
combate(X, Y):- jedi(Y), sith(X).

matou(vader, obiwan).
matou(vader, sidious).