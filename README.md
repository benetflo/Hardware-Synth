# Hardware-Synth

FORMEL FÖR ATT TRANSPONERA TONER (TEMPERERAD STÄMNING)

ton med frekvens f, gå n halvtonssteg upp eller ner:

    f_ny = f * 2^(n/12)

- f = ursprunglig frekvens (i Hz)
- n = antal halvtonssteg (positivt för uppåt, negativt för nedåt)
- f_ny = den transponerade frekvensen

Gå ner ett halvtonssteg (n = -1)

    f_ny = f * 2^(-1/12) ≈ f * 0.943874

Gå upp ett halvtonssteg (n = +1)

    f_ny = f * 2^(1/12) ≈ f * 1.05946

Detta gäller ALLA toner – oavsett tonart – eftersom vårt västerländska tonsystem är logaritmiskt.
