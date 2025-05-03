# Hardware-Synth


🔑 FORMEL FÖR ATT TRANSPONERA TONER (TEMPERERAD STÄMNING)

Om du har en ton med frekvens f, och du vill gå n halvtonssteg upp eller ner, använd:

    f_ny = f * 2^(n/12)

Där:
- f = ursprunglig frekvens (i Hz)
- n = antal halvtonssteg (positivt för uppåt, negativt för nedåt)
- f_ny = den transponerade frekvensen

📉 Exempel: Gå ner ett halvtonssteg (n = -1)

    f_ny = f * 2^(-1/12) ≈ f * 0.943874

📈 Exempel: Gå upp ett halvtonssteg (n = +1)

    f_ny = f * 2^(1/12) ≈ f * 1.05946

🧠 Detta gäller ALLA toner – oavsett tonart – eftersom vårt västerländska tonsystem är logaritmiskt.
